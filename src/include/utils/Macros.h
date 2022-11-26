#ifndef UTILS_H
#define UTILS_H

#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <raylib.h>

typedef struct{
    int width;
    int heigth;
    const char* winTitle;
    int FPS;
}WinProperties;

typedef Vector2 XYUnits;

Vector2 ObjectSize(XYUnits units);
Vector2 Random_Y_ObjectSize(int units);

#endif