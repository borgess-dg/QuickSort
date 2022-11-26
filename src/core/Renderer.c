#include "../include/core/Renderer.h"

void Renderer(void){
    CurrentScreen Screen = MAIN;
    while(Screen != EXIT){
        switch (Screen)
        {
        case MAIN:
            printf("Hello");
            break;
        case EXIT:
            break;
        default:
            printf("Hello");
            break;
        }
    }
}