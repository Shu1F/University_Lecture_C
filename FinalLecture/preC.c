#include <stdio.h>
// 練習問題C
int sum(int m, int n)
{
    return m + n;
}
int func(int n)
{
    if (n < 0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}

int main(void)
{
    int l, n = -2, m = -3;
    l = sum(func(m), func(n));
    printf("%dの絶対値と%dの絶対値和は%d\n", m, n, l);
    return 0;
}