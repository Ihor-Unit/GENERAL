#include <Windows.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <iostream>

#define Nv 11 //����� ������

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
float** randm(int row, int col);
int** mulmr(float cof, float** arr, int row, int col);
struct point {
    point(int _x, int _y, int nam) {
        x = _x;
        y = _y;
        name = nam;
    }
    int x, y;
    int name;
};
struct mappoints {
    mappoints(int quantity) {
        arr = (point*)malloc(quantity * sizeof(point));
        length = 0;
    }

    void push(point p) {
        arr[length] = p;
        length++;
    }

    ~mappoints() {
        free(arr);
    }

    point* arr;
    int length;
};

int main() {
    HINSTANCE hInstance = (HINSTANCE)GetModuleHandleA(NULL);
    HWND hWnd;
    MSG msg;
    WNDCLASS w;

    w.lpszClassName = "����������� ������ 3"; //��'� ��������
    w.hInstance = hInstance; //������������� ����������
    w.lpfnWndProc = WndProc; //�������� �� ������� ����
    w.hCursor = LoadCursorA(NULL, IDC_ARROW); // ������������ ������
    w.hIcon = 0; //��������� �� ����
    w.lpszMenuName = 0; // ���� �� ����
    w.hbrBackground = WHITE_BRUSH;//���� ���� ����
    w.style = CS_HREDRAW | CS_VREDRAW; //�����: ����� ���������������
    w.cbClsExtra = 0; //�-�� ���������� ����� ��� ����� �����
    w.cbWndExtra = 0; //

    ATOM A = RegisterClassA(&w);
    if (!A)  return 1;

    hWnd = CreateWindowA("����������� ������ 3", //��'� ��������
        "����������� ������ 3. ������� �������� �.�.", //���������
        WS_OVERLAPPEDWINDOW, //����� ���� - �����������
        0, //��������� ��������� ���� ���� �� ����� �� �
        0, // ��������� ��������� ���� ���� �� ����� �� y
        1400, //������ ����
        800, //������ ����
        (HWND)NULL, // ������������� ������������ ����
        (HMENU)NULL, //������������� ���� (����)
        (HINSTANCE)hInstance, //������������� ���������� ����
        (HINSTANCE)NULL); // �������� ��������� ������


    ShowWindow(hWnd, SW_SHOWNORMAL);


    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);//���������� ��� ������ � ������ 
        DispatchMessage(&msg);
    }
    return 0;
}


LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    PAINTSTRUCT ps;
    HDC hdc;

    HPEN BluePen = CreatePen(PS_SOLID, 2, RGB(50, 0, 255));
    HPEN BlackPen = CreatePen(PS_SOLID, 1, RGB(20, 20, 5));

    int rv = 20;//����� ������� (px)
    int posx = 100, posy = 100; //��������� �������
    int checker = 4;
    float** Matrx;
    int** T;
    int xPos, yPos; //��������� ������� ����
    mappoints PointMap(Nv);

    switch (message)
    {
    case WM_SIZE:
        InvalidateRect(hWnd, NULL, true);
        break;
    case WM_PAINT://///////////////
        hdc = BeginPaint(hWnd, &ps);

        SelectObject(hdc, BluePen);
        
        Matrx = randm(Nv, Nv);
        T = mulmr(1.0 - 1 * 0.02 - 8 * 0.005 - 0.25, Matrx, Nv, Nv);

        for (int i = 0; i < Nv; i++) { //������� ������� 
            if (i == checker) { posy += 200; checker += 4; posx = 100; }
            if (i == 5) { posx += 150; }


            Ellipse(hdc, posx - rv, posy + rv, posx + rv, posy - rv);

            PointMap.push(point(posx+rv/2, posy+rv/2, i+1));

            char a[5];
            _itoa_s(i+1, a, 10);
            TextOutA(hdc, posx - 4, posy - 8, a, 2);
            posx += 240;
        }
        for (int i = 0; i < Nv; i++) {////
            std::cout << PointMap.arr[i].x << " " << PointMap.arr[i].y << "\n";
        }

       
        EndPaint(hWnd, &ps);
        break;
    case WM_CHAR:
        printf("char %c\n",wParam);
        break;
    case WM_KEYDOWN:
        printf("key %d\n", wParam);
        break;
    case WM_MOUSEMOVE:
        /*xPos = LOWORD(lParam);
        yPos = HIWORD(lParam);
        printf("mouse x:%d y:%d\n",xPos, yPos);*/
        break;
    case WM_LBUTTONDOWN: //left mouse buttn
        //printf("LButtn\n");
        break;

    case WM_CLOSE:
        PostQuitMessage(0);
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProcA(hWnd, message, wParam, lParam);
    }
    return 0;
}





void arrow(HDC& hdc, float fi, int px, int py) {// py, px - ����� ������
    fi = 3.1416 * (180.0 - fi) / 180.0;
    int lx, ly, rx, ry;
    lx = px + 15 * cos(fi + 0.3);
    rx = px + 15 * cos(fi - 0.3);
    ly = py + 15 * sin(fi + 0.3);
    ry = py + 15 * sin(fi - 0.3);
    MoveToEx(hdc, lx, ly, NULL);
    LineTo(hdc, px, py);
    LineTo(hdc, rx, ry);
    LineTo(hdc, lx, ly);
}

float** randm(int row, int col) {//0-2.0
    float** Mat;
    Mat = (float**)malloc(row * sizeof(float*));
    for (int i = 0; i < row; i++) {
        Mat[i] = (float*)malloc(col * sizeof(float));
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            Mat[i][j] = ((float)(rand() % 21)) / 10;
        }
    }
    return Mat;
}

int** mulmr(float cof, float** arr, int row, int col) {
    int** T;
    T = (int**)malloc(row * sizeof(int*));
    for (int i = 0; i < row; i++) {
        T[i] = (int*)malloc(col * sizeof(int));
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            T[i][j] = arr[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            T[i][j] *= cof;
            T[i][j] = (arr[i][j] > 1.0) ? 1 : 0;
        }
    }

    return T;
}