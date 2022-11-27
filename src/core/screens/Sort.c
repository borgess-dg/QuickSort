#include "../../include/screens/Sort.h"
#include "../../include/components/BarGenerator.h"
#include "../../include/components/Input.h"
#include "../../include/utils/Macros.h"

Screen SortScreen(char* inputContent){
    BeginDrawing();
    ClearBackground(BLACK);
    Vector2 TITLEPOSITION = SetDrawingPosition((XYUnits){1, 1});
    DrawText("Quick Sort Algorithm", TITLEPOSITION.x, TITLEPOSITION.y, 16, WHITE);
    Input(inputContent);
    int BarsQuantity = StringToInt(inputContent);
    if(inputContent){
        GenerateBars(BarsQuantity);
    }
    EndDrawing();
    return SORT;
}