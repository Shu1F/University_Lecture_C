#include <stdio.h>

double max(double, double);
double abs(double);
double cube(double);

int main(void)
{
    double a, b;
    a = 3;
    b = -2;
    printf("max(|%f|, (%f)^3) = %f\n", a, b, max(abs(a), cube(b)));
    return 0;
}

double max(double x, double y)
{
    return (x > y) ? x : y;
}

double abs(double x)
{
    return (x > 0) ? x : -x;
}

double cube(double x)
{
    return x * x * x;
}
