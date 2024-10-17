#include <stdio.h>
int rec(int n)
{
    if (n == 0)
    {
        return 3;
    }
    else if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 2;
    }
    else
    {
        return rec(n - 2) + rec(n - 3);
    }
}

int main(void)
{
    int n = 50;
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", rec(i));
    }

    return 0;
}