#include <stdio.h>
float div(float a, float b)
{
    float result = 0;
    result = a / b;
    return result;
}

int main(void)
{
    int a = 10;
    int b = 3;
    float c = div(a, b);
    printf("%d ÷ %d = %f\n", a, b, c);
    return 0;
}