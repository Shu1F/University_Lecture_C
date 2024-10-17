#include <stdio.h>
// 練習問題E
int tri(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else if (n >= 3)
    {
        return tri(n - 1) + tri(n - 2) + tri(n - 3);
    }
}

int main(void)
{
    int n = 7;
    printf("数列Tnについて, n=%dのときの値は%d\n", n, tri(n));
    return 0;
}
