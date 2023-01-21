#include <windows.h>
#include <iostream>
#include "lazy.h"
#include "enc.h"
#include "other.h"
#include <stdio.h>
#include <filesystem>
#include <fstream>
#include <chrono>




int main()
{
	SetConsoleTitleA(E("            Free Perm Spoofer Made By ida lover"));
	LI_FN(system)(E("color 8"));

	slow_print("\n\n  [+] Wait...", 45);

	CreateThread(NULL, NULL, AntiDebug2_Loop, NULL, NULL, NULL);

	log();


	spoof::perm();

	slow_print("\n\n  [+] Click Any Key To Exit!", 45);


	LI_FN(system)(E("pause >nul"));






	
}