#include <stdio.h>
int x;
void mondai1(int b) {
    x = b;
}
void mondai2(void) {
    static int c = 10;
    x = c;
    c++;
}
int mondai3(int d) {
    x++;
    d++;
    return d;
}

int main (void) {
    printf("x = %d\n", x);
    
    x = 101;
    printf("x = %d\n", x);

    mondai1(102);
    printf("x = %d\n", x);

    mondai2();
    mondai2();
    mondai2();
    printf("x = %d\n", x);
    for (int i = 103; i < 104; i++)
    {
        int x = i;
        printf("x = %d\n", x);
        x = mondai3(i);
        printf("x = %d\n", x);
    }
    printf("x = %d\n", x);
    return 0;

}