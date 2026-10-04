#include "pch.h"
#include "DungeonsBasic.h"

DWORD WINAPI MainThread(LPVOID param) {
	CreateConsole();
	DrawKeybinds({ {"F9", "Hello World"}, {"F10", "Unload"}});

	Print(Startup, "Dll Loaded");

	while (true) {
		if ((GetAsyncKeyState(VK_F10) & 0x8000) != 0) {
			Print(PrintType::Info, "Unloading Dll");
			CleanupConsole();
			FreeLibraryAndExitThread((HMODULE)param, 0);
		}

		if ((GetAsyncKeyState(VK_F9) & 0x8000) != 0) {
			Print(PrintType::Info, "Hello, world!");
		}
	}
}