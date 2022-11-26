#ifndef APP_H
#define APP_H

#include <stdbool.h>
#include <raylib.h>
#include <stdio.h>
#include <stdlib.h>

#include "../utils/Macros.h"

//Create App windows.
void App(WinProperties window);
//Treaths the execution loop.
void Run(void);
//End of application.
void Close(void);

#endif