#include <stdio.h>
// a{n} = 2a{n-1} + a{n-2}, a{1}=2, a{2}=3(再帰なし版)

int main(void)
{
    int n = 4;
    int a, b = 3, c = 2;
    for (int i = 3; i <= n; i++)
    {
        a = 2 * b + c;
        c = b;
        b = a;
    }
    printf("数列a%dの値は%d\n", n, a);
    return 0;
}