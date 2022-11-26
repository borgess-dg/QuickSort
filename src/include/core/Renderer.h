#ifndef RENDERER_H
#define RENDERER_H

#include <stdio.h>
#include <raylib.h>

typedef enum{
    SORT,
    EXIT
}CurrentScreen;

//Application lifecycle.
void Renderer();

#endif