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
    for (int i = 1; i <= n; i++)
    {
        int an = rec(i);
        // printf("%d\n", an);
        // printf("%d\n", rec(i));
        if (an % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}