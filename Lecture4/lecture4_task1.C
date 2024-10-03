#include <stdio.h>
// 再帰を用いて1からnまでの二乗和1^2 + 2^2 + 3^2 + ... + n^2を計算する
int rec(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * n + rec(n - 1);
    }
}
int main(void)
{
    for (int n = 1; n <= 4; n++)
    {
        printf("1から%dまでの二乗和の値は%d\n", n, rec(n));
    }
    return 0;
}
