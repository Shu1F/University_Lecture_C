#include <stdio.h>
// 練習問題D
int func(int n)
{
    if (n == 0)
    {
        return -1;
    }
    else
    {
        return 3 * func(n - 1) + 5;
    }
}

int main(void)
{
    int n = 3, m;
    m = func(n);
    printf("数列anについて, n=%dのときの値は%d\n", n, m);
    return 0;
}