// RevanScript (RVS) Core / Engine Libraries
#include "../include/rvswin.h"

// Windows Console Activate Function 
void windows_console_init(void){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD mode;
    GetConsoleMode(hConsole, &mode);
    mode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hConsole, mode);
}