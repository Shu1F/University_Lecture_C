#include <stdio.h>
// 練習問題G

int func(int n)
{
    int a;
    int b = 2;
    int c = 1;
    int i;

    if (n == 1)
    {
        return c;
    }
    else if (n == 2)
    {
        return b;
    }

    for (i = 3; i <= n; i++)
    {
        a = -2 * b + 2 * c;
        c = b;
        b = a;
    }
    return a;
}
int main(void)
{
    int n = 4;
    printf("数列anについて, n=%dのときの値は%d\n", n, func(n));
    return 0;
}