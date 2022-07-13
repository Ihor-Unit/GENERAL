#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>

TObject player;


typedef struct SPoint {
     float x, y;
}TPoint;

TPoint point(float x, float y) {
    TPoint pt;
    pt.x = x;
    pt.y = y;
    return pt;
}

typedef struct SObject {
    TPoint pos;
    TPoint size;
    COLORREF brush;
}TObject;

void ObjectInit(TObject *obj, float xPos, float yPos, float width, float height) {
    obj->pos = point(xPos, yPos);
    obj->size = point(width, height);
    obj->brush = RGB(0, 255, 0);
}

void ObjectShow(TObject obj, HDC dc) {
    SelectObject(dc, GetStockObject(DC_PEN));
    SetDCPenColor(dc, RGB(0,0,0));
    SelectObject(dc, GetStockObject(DC_BRUSH));
    SetDCBrushColor(dc, obj.brush);
    Rectangle(dc, (int)(obj.pos.x), (int)(obj.pos.y),
                  (int)(obj.pos.x + obj.size.x), (int)(obj.pos.y + obj.size.y));
}

void WinInit(TObject &player) {
    ObjectInit(&player, 100, 100, 40, 40);
}


LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
void WinShow(HDC, RECT*, const TObject&);

int main() {
    HINSTANCE hInstance = (HINSTANCE)GetModuleHandleA(NULL);
    HWND hWnd;
    MSG msg;
    WNDCLASS w;
    RECT* rect; //massive of rectangles
    

    w.lpszClassName = "Game"; //��'� ��������
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

    hWnd = CreateWindow("Game", //��'� ��������
        "Game of SoloTeam", //���������
        WS_OVERLAPPEDWINDOW, //����� ���� - �����������
        0, //��������� ��������� ���� ���� �� ����� �� �
        0, // ��������� ��������� ���� ���� �� ����� �� y
        1420, //������ ����
        800, //������ ����
        (HWND)NULL, // ������������� ������������ ����
        (HMENU)NULL, //������������� ���� (����)
        (HINSTANCE)hInstance, //������������� ���������� ����
        (HINSTANCE)NULL); // �������� ��������� ������

    HDC dc = GetDC(hWnd);//���������� ����������� ��������� ���������� ���� 

    ShowWindow(hWnd, SW_SHOWNORMAL);
    WinShow(dc, rect, player);

    WinInit(player);
    while (GetMessage(&msg, NULL, 0, 0)){ //PeekMessage()
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

    
    int xPos, yPos; //��������� ������� ����

    switch (message)
    {
    case WM_SIZE:
        InvalidateRect(hWnd, NULL, true);
        break;
    case WM_PAINT:
        hdc = BeginPaint(hWnd, &ps);

        



        EndPaint(hWnd, &ps);
        break;
    //case WM_CHAR:
    //    printf("char %c\n", wParam);
    //    break;
    //case WM_KEYDOWN:
    //    printf("key %d\n", wParam);
    //    break;
    //case WM_MOUSEMOVE:
    //    xPos = LOWORD(lParam);
    //    yPos = HIWORD(lParam);
    //    printf("mouse x:%d y:%d\n", xPos, yPos);
    //    break;
    //case WM_LBUTTONDOWN: //left mouse buttn
    //    printf("LButtn\n");
    //    break;

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

void WinShow(HDC dc, RECT* rec, const TObject& player) {
    //SelectObject(dc, GetStockObject(DC_BRUSH));//�������
    //SetDCBrushColor(dc, RGB(0, 255, 0));
    //SelectObject(dc, GetStockObject(DC_PEN));//������
    //SetDCPenColor(dc, RGB(255,0,0));
    //Rectangle(dc, 0,0,100,100);

    HDC memDC = CreateCompatibleDC(dc);
    HBITMAP memBM = CreateCompatibleBitmap(dc, rec->right - rec->left, rec->bottom - rec->top);
    SelectObject(memDC, memBM);

    SelectObject(memDC, GetStockObject(DC_BRUSH));
    SetDCBrushColor(memDC, RGB(255,255,255));
    Rectangle(memDC, 0,0,640,480);

    ObjectShow(player, memDC);

    BitBlt(dc, 0, 0, rec->right - rec->left, rec->bottom - rec->top, memDC, 0, 0, SRCCOPY);
    DeleteDC(memDC);
    DeleteObject(memBM);
}
