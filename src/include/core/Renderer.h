#ifndef RENDERER_H
#define RENDERER_H

#include <stdlib.h>
#include <raylib.h>

typedef enum{
    SORT,
    EXIT
}CurrentScreen;

//Application lifecycle.
void Renderer();

#endif