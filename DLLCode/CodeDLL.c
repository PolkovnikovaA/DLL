#include <Windows.h>
#include <stdio.h>

BOOL WINAPI DLLMain(HINSTANCE hlnstDll, DWORD dwReason, LPVOID IpReserved)
{
	BOOL bAllWentWell = TRUE;
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	if (bAllWentWell)
		return TRUE;
	else
		return FALSE;
}
extern __declspec(dllimport) int MyFunc(LPWSTR str);

int MyFunc(LPWSTR str)
{
	MessageBox(NULL, str, L"? ???????", MB_OK);
	return 0;
}