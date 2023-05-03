// Sivy's Cheat Loader Base, posted this on github for the slow
// made by sivy#0001
// lasted updated 5.1.2023





#include <Windows.h>
#include <iostream>
#include <conio.h>
#include <filesystem>
#include <string>
#include <thread>



#include "Driver.hpp"
#include "../Sivy's Cheat Loader Base/Imgui/imgui_impl_dx9.h" // dx9 
#include "../Sivy's Cheat Loader Base/Imgui/imgui_impl_win32.h"


DWORD UDPID;
uintptr_t baseadd;

using namespace std;




int main()
{
	SetConsoleTitle("Sivy's Cheat Loader Base");




    system("color 9");  http://patorjk.com/software/taag-v1/ << change art here
    cout << R"(

   _____ _                _   
  / ____| |              | |  
 | |    | |__   ___  __ _| |_ 
 | |    | '_ \ / _ \/ _` | __|
 | |____| | | |  __/ (_| | |_ 
  \_____|_| |_|\___|\__,_|\__|      
 
)";


    cout << "\n\n  [+] Loading Driver..";
    if (driver->Init(FALSE)) { driver->Attach(UDPID); baseadd = driver->GetModuleBase(L"FortniteClient-Win64-Shipping.exe"); } // add your own drivers and mapper. and change game here your welcome!
    


	Sleep(-1); 

}



