#include <stdio.h>
// 練習問題A

int func(int m)
{
    if (m > 0)
    {
        return m;
    }
    else
    {
        return -m;
    }
}

int main(void)
{
    int n, c = -3;
    n = func(c);
    printf("%dの絶対値は%d\n", c, n);
    return 0;
}
