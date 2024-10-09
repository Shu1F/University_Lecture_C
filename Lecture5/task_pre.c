#include <stdio.h>
int rec(int n)
{
    if (n == 0)
    {
        return 2;
    }
    else
    {
        return -2 * rec(n - 1) + 4;
    }
}

int main(void)
{
    int n;
    printf("整数を入力してください：");
    scanf("%d", &n);
    printf("数列aの%d番目の値は%d\n", n, rec(n));
    return 0;
}

// #include <stdio.h>
// int main(void)
// {
//     int n = 4;
//     int first = 2;

//     for (int i = 0; i < n; i++)
//     {
//         first = -2 * first + 4;
//     }
//     printf("数列aの%d番目の値は%d\n", n, first);

//     return 0;
// }

// #include <stdio.h>

// int pre(int n)
// {
//     int an = 2;
//     for (int i = 0; i < n; i++)
//     {
//         an = -2 * an + 4;
//     }
//     return an;
// }

// int main(void)
// {
//     int n = 4;
//     printf("数列aの%d番目の値は%d\n", n, pre(n));
//     return 0;
// }
