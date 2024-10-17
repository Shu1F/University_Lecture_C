#include <stdio.h>
// 練習問題F

int func(int n)
{
    int a = -1;
    int i;
    for (i = 1; i <= n; i++)
    {
        a = 3 * a + 5;
    }
    return a;
}
int main(void)
{
    int n = 3;
    printf("数列anについて, n=%dのときの値は%d\n", n, func(n));
    return 0;
}