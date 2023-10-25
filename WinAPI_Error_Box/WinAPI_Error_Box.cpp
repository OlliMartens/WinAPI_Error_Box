#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    PSTR lpCmdLine, int nCmdShow)
{
    //MessageBox(0,L"Fatal Error!", L"Error",MB_OKCANCEL | MB_ICONERROR);
    //MessageBox(0,L"Fatal Error!", L"Error",MB_OKCANCEL | MB_ICONERROR);
    MessageBoxA(0, "Hello World", "Text", MB_DEFBUTTON1);
    return 0;
}