#include <stdio.h>
// 正の奇数nを引数とし，以下の正の奇数の和を求める関数
int rec(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + rec(n - 2);
    }
}
int main(void)
{
    int n = 11;
    printf("%d以下の正の奇数の和は%d\n", n, rec(n));
    return 0;
}