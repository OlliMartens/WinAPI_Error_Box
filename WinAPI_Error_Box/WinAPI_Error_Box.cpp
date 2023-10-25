#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    PSTR lpCmdLine, int nCmdShow)
{   
    //https://www.youtube.com/watch?v=nA82EYpgBCo&t=583s&ab_channel=Pilzschaf
    //https://www.youtube.com/watch?v=yvWYggka30A&list=LL&index=2&t=25s&ab_channel=DanielBlagy
    //entweder man schreibt ein L for der Zeichenkette, damit der String erkannt wird oder man nutzt MessageBoxA
    
    //Error Box 
    //MessageBox(0,L"Fatal Error!", L"Error",MB_OKCANCEL | MB_ICONERROR);
    
    //Hello World Box
    //MessageBoxA(0, "Hello World", "Text", MB_DEFBUTTON1);

    //https://learn.microsoft.com/de-de/windows/win32/api/winuser/nf-winuser-messagebox

        int msgboxID = MessageBox(
            NULL,
            L"Resource not available\nDo you want to try again?",
            L"Account Details",
            MB_ICONWARNING | MB_CANCELTRYCONTINUE | MB_DEFBUTTON2
        );

        switch (msgboxID)
        {
        case IDCANCEL:
            MessageBox(0, L"Fatal Error!", L"Error", MB_OKCANCEL | MB_ICONERROR);
            break;
        case IDTRYAGAIN:
            MessageBoxA(0, "Hello World", "Text", MB_DEFBUTTON1);
            break;
        case IDCONTINUE:
            MessageBoxA(0, "Hast du gut gemacht", "Nachricht", MB_DEFBUTTON1);
            break;
        }
    return 0;
}