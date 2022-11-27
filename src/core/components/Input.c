#include "../../include/components/Input.h"

#include <stdio.h>

void Input(char* input){
    static int counter;
    static int frameCounter;
    static bool isFocused;

    //Creating input box.
    Vector2 INPUTSIZE = ObjectSize((XYUnits){5, 2});
    Vector2 INPUTPOSITION = SetDrawingPosition((XYUnits){1, 4});
    Rectangle inputRect = {INPUTPOSITION.x, INPUTPOSITION.y, INPUTSIZE.x, INPUTSIZE.y};

    DrawRectangleRec(inputRect, WHITE);

    if(CheckCollisionPointRec(GetMousePosition(), inputRect)){
        SetMouseCursor(MOUSE_CURSOR_IBEAM);
        int key = GetCharPressed();
        while(key > 0){
            if(((key >= 32) && (key <= 125)) && (counter < 25)){
                input[counter] = (char) key;
                input[counter + 1] = '\0';
                counter++;
            }
            key = GetCharPressed();     
        }
        if(IsKeyPressed(KEY_BACKSPACE)){
                counter--;
                if(counter < 0){
                    counter = 0;
                }
                input[counter] = '\0';
        }
    }
    else{
        SetMouseCursor(MOUSE_CURSOR_DEFAULT);
    }
    DrawText(input, INPUTPOSITION.x, INPUTPOSITION.y, 12, RED);
    frameCounter++;
    /**
    if(isFocused){
        if(frameCounter % 60 == 0){
            DrawText("|", POS_X + MeasureText(input, 20) + 11, floor(POS_Y + (GSizeY/2 - 20/2)), 20, RED);
        }
        else{
            isFocused = false;
            DrawText("", POS_X + MeasureText(input, 20) + 11, floor(POS_Y + (GSizeY/2 - 20/2)), 20, RED);
        }
    }
    */
}