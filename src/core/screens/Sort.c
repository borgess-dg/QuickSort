#include "../../include/screens/Sort.h"
#include "../../include/components/BarGenerator.h"
Screen SortScreen(){
    BeginDrawing();
    ClearBackground(BLACK);
    DrawText("Quick Sort Algorithm", 0, 0, 16, WHITE);
    GenerateBars(25);
    EndDrawing();
    return SORT;
}