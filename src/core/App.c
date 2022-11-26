#include "../include/core/App.h"
#include "../include/core/Renderer.h"
#include <raylib.h>

void App(WinProperties window){
    InitWindow(window.width, window.heigth, window.winTitle);

    SetTargetFPS(window.FPS);
}

void Run(){
    IsWindowReady() ? Renderer() : exit(-1);
}

void Close(){
    CloseWindow();
}