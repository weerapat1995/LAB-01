#include <windows.h>

int WINAPI
WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR  lpCmdLine, int nCmdshow)
{
	MessageBox(NULL, "Hello World! This is my first win32 program!",
		"Lesson1", MB_OK);
	return 0;
}
