#include "../../include/utils/Macros.h"

Vector2 ObjectSize(XYUnits units){
    Vector2 tmp;

    int widthParam = floor(GetScreenWidth()/32);
    int heightParam = floor(GetScreenHeight()/32);
    tmp.x = widthParam * units.x;
    tmp.y = heightParam * units.y;

    return tmp;
}

Vector2 Random_Y_ObjectSize(int units){
    Vector2 tmp;

    srand(time(0));

    int widthParam = floor(GetScreenWidth()/32);
    int heightParam = floor(GetScreenHeight()/32);
    tmp.x = widthParam * 1;
    tmp.y = heightParam * (rand() % 20);
    
    return tmp;
}

Vector2 SetDrawingPosition(XYUnits units){
    Vector2 tmp;

    int widthParam = floor(GetScreenWidth()/32);
    int heightParam = floor(GetScreenHeight()/32);
    tmp.x = widthParam * units.x;
    tmp.y = heightParam * units.y;

    return tmp;
}

int StringToInt(const char* str){
    return atoi(str);
}