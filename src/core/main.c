#include "../include/core/App.h"
#include "../include/core/Utils.h"

int main(void){
    App((WinProperties){500, 500, "Hello, World!", 60});
    Run();
    
    return 0;
}