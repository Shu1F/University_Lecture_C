#include <stdio.h>

int square(int x)
{
    return x * x;
}

int main(void)
{
    int a, b;
    a = 6;
    b = square(a);
    prnt("%d の二乗は %d\n", a, b);
    return 0;
}