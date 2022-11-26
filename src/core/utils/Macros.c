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

    srand(time(NULL));

    int widthParam = floor(GetScreenWidth()/32);
    int heightParam = floor(GetScreenHeight()/32);
    tmp.x = widthParam * 1;
    tmp.y = heightParam * (rand() % 50);
    
    return tmp;
}