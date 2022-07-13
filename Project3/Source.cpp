#include <Windows.h>
#include <stdlib.h>
#include <iostream>

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

int main() {
    HINSTANCE hInstance = (HINSTANCE)GetModuleHandle(NULL);
    HWND hWnd;
    MSG msg;
    WNDCLASS w;


    w.lpszClassName = "Лабораторна робота 3"; //ім'я програми
    w.hInstance = hInstance; //ідентифікатор застосунку
    w.lpfnWndProc = WndProc; //вказівник на функцію вікна
    w.hCursor = LoadCursor(NULL, IDC_ARROW); // завантажений курсор
    w.hIcon = 0; //піктограми не буде
    w.lpszMenuName = 0; // меню не буде
    w.hbrBackground = WHITE_BRUSH;//колір фона вікна
    w.style = CS_HREDRAW | CS_VREDRAW; //стиль: можна перемальовувати
    w.cbClsExtra = 0; //к-ть додаткових байтів для цього класу
    w.cbWndExtra = 0; //

    ATOM A = RegisterClassA(&w);
    if (!A)  return 1;

    hWnd = CreateWindow("Лабораторна робота 3", //Ім'я програми
        "Лабораторна робота 3. Виконав Процишин І.І.", //Заголовок
        WS_OVERLAPPEDWINDOW, //Стиль вікна - комплексний
        100, //положення верхнього кута вікна на екрані по х
        100, // положення верхнього кута вікна на екрані по y
        460, //ширина вікна
        240, //висота вікна
        (HWND)NULL, // ідентифікатор породжуючого вікна
        (HMENU)NULL, //ідентифікатор меню (немає)
        (HINSTANCE)hInstance, //ідентифікатор екземпляра вікна
        (HINSTANCE)NULL); // додаткові параметри відсутні


    ShowWindow(hWnd, SW_SHOWNORMAL);


    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return 0;
}

void arrow(HDC& hdc, float fi, int px, int py) {// py, px - кінець стрілки
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

        MoveToEx(hdc, nx[0], ny[0], NULL); //як поняв: початкова точка
        LineTo(hdc, nx[1], ny[1]); //як поняв: транзитна точка (не обовязково кінцева)
        arrow(hdc, 0/*кут нахилу*/, nx[1] - dx/*положення по Х*/, ny[1]/*по Y*/);

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