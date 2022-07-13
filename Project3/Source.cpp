#include <Windows.h>
#include <stdlib.h>
#include <iostream>

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

int main() {
    HINSTANCE hInstance = (HINSTANCE)GetModuleHandle(NULL);
    HWND hWnd;
    MSG msg;
    WNDCLASS w;


    w.lpszClassName = "����������� ������ 3"; //��'� ��������
    w.hInstance = hInstance; //������������� ����������
    w.lpfnWndProc = WndProc; //�������� �� ������� ����
    w.hCursor = LoadCursor(NULL, IDC_ARROW); // ������������ ������
    w.hIcon = 0; //��������� �� ����
    w.lpszMenuName = 0; // ���� �� ����
    w.hbrBackground = WHITE_BRUSH;//���� ���� ����
    w.style = CS_HREDRAW | CS_VREDRAW; //�����: ����� ���������������
    w.cbClsExtra = 0; //�-�� ���������� ����� ��� ����� �����
    w.cbWndExtra = 0; //

    ATOM A = RegisterClassA(&w);
    if (!A)  return 1;

    hWnd = CreateWindow("����������� ������ 3", //��'� ��������
        "����������� ������ 3. ������� �������� �.�.", //���������
        WS_OVERLAPPEDWINDOW, //����� ���� - �����������
        100, //��������� ��������� ���� ���� �� ����� �� �
        100, // ��������� ��������� ���� ���� �� ����� �� y
        460, //������ ����
        240, //������ ����
        (HWND)NULL, // ������������� ������������ ����
        (HMENU)NULL, //������������� ���� (����)
        (HINSTANCE)hInstance, //������������� ���������� ����
        (HINSTANCE)NULL); // �������� ��������� ������


    ShowWindow(hWnd, SW_SHOWNORMAL);


    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
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
    
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    PAINTSTRUCT ps;
    HDC hdc;


    LPCSTR nn[3] = { "1", "2", "3" };
    int nx[3] = { 100,200,300 };
    int ny[3] = { 100,100,100 };
    int dx = 16, dy = 16, dtx = 5;
    int i;

    HPEN BPen = CreatePen(PS_SOLID, 2, RGB(50, 0, 255));
    HPEN KPen = CreatePen(PS_SOLID, 1, RGB(20, 20, 5));

    switch (message)
    {
    case WM_SIZE:
        InvalidateRect(hWnd, NULL, true);
        break;
    case WM_PAINT:
        hdc = BeginPaint(hWnd, &ps);





        SelectObject(hdc, KPen);

        MoveToEx(hdc, nx[0], ny[0], NULL); //�� �����: ��������� �����
        LineTo(hdc, nx[1], ny[1]); //�� �����: ��������� ����� (�� ���������� ������)
        arrow(hdc, 0/*��� ������*/, nx[1] - dx/*��������� �� �*/, ny[1]/*�� Y*/);

        Arc(hdc, nx[0], ny[0] - 40, nx[2], ny[2] + 40, nx[2], ny[2], nx[0], ny[0]);
        arrow(hdc, -45.0, nx[2] - dx * 0.5, ny[2] - dy * 0.8);


        SelectObject(hdc, BPen);
        for (i = 0; i <= 2; i++) {
            Ellipse(hdc, nx[i] - dx, ny[i] - dy, nx[i] + dx, ny[i] + dy);
            //Ellipse(hdc, 10, 10, 40, 40);
            TextOut(hdc, nx[i] - dtx, ny[i] - dy / 2, nn[i], 1);
        }
        EndPaint(hWnd, &ps);
        break;
    case WM_CLOSE:
        if (MessageBox(hWnd, "Close?", "Msg Caption", MB_YESNO) == IDYES) {
            return DefWindowProc(hWnd, message, wParam, lParam);
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}