#include "../include/core/Renderer.h"
#include "../include/screens/Sort.h"

void Renderer(void){
    CurrentScreen ScreenID = SORT;

    char* input = malloc(124 * sizeof(int));

    while(ScreenID != EXIT){
        switch (ScreenID)
        {
        case SORT:
            ScreenID = SortScreen(input);
            break;
        case EXIT:
            break;
        }
    }

    free(input);
}