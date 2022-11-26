#include "../../include/components/BarGenerator.h"
#include <stdio.h>
int* GenerateBars(int numberOfBars){
    for(int i = 0; i < numberOfBars; i++){
        Vector2 defaultSize = Random_Y_ObjectSize(1);
        printf("%lf", defaultSize.y);
        DrawRectangle(20 * i, 200, defaultSize.x, defaultSize.y, WHITE);
    }
}