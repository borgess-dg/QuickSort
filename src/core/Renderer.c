#include "../include/core/Renderer.h"
#include "../include/screens/Sort.h"

void Renderer(void){
    CurrentScreen ScreenID = SORT;
    while(ScreenID != EXIT){
        switch (ScreenID)
        {
        case SORT:
            ScreenID = SortScreen();
            break;
        case EXIT:
            break;
        }
    }
}