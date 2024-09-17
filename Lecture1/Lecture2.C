#include <stdio.h>

int x = 123; 

int main(void) {
    int y = 456; 
    printf("グローバル変数は%dで、ローカル変数は%dです。\n", x, y);
    return 0;
}
