#ifndef RENDERER_H
#define RENDERER_H

#include <stdio.h>
#include <raylib.h>

typedef enum{
    MAIN,
    EXIT
}CurrentScreen;

//Application lifecycle.
void Renderer();

#endif