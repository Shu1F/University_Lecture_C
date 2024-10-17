#include <stdio.h>
// 練習問題B

int sum(int m, int n)
{
    return m + n;
}

int main(void)
{
    int l, n = 2, m = 3;
    l = sum(m, n);
    printf("%dと%dの和は%d\n", m, n, l);
    return 0;
}
