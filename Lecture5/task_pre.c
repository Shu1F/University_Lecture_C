// #include <stdio.h>
// int rec(int n)
// {
//     if (n == 0)
//     {
//         return 2;
//     }
//     else
//     {
//         return -2 * rec(n - 1) + 4;
//     }
// }

// int main(void)
// {
//     int n;
//     printf("整数を入力してください：");
//     scanf("%d", &n);
//     printf("数列aの%d番目の値は%d\n", n, rec(n));
//     return 0;
// }

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

// #include <stdio.h>
// int rec(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     else if (n == 2)
//     {
//         return 2;
//     }
//     else
//     {
//         return -6 * rec(n - 1) - 9 * rec(n - 2);
//     }
// }

// int main(void)
// {
//     int n = 4;
//     printf("%d", rec(n));
// }

// #include <stdio.h>

// int rec(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     else if (n == 2)
//     {
//         return 1;
//     }
//     else
//     {
//         return rec(n - 1) + rec(n - 2);
//     }
// }

// int main(void)
// {
//     // int n = 4;
//     // printf("%d", rec(n));

//     for (int n = 1; n <= 10; n++)
//     {
//         printf("フィボナッチ数列の第%d項は%d\n", n, rec(n));
//     }
// }

// #include <stdio.h>

// int main(void)
// {
//     int n = 4;
//     int a, b = 2, c = 1;
//     for (int i = 3; i <= n; i++)
//     {
//         a = -6 * b - 9 * c;
//         c = b;
//         b = a;
//     }
//     printf("%d", a);
//     return 0;
// }

#include <stdio.h>
// フィボナッチ数列(再帰なし版)
int main(void)
{
    int n = 10;
    int a, b = 1, c = 1;

    for (int i = 3; i <= n; i++)
    {
        a = b + c;
        c = b;
        b = a;
    }
    printf("フィボナッチ数列の第%d項は%d\n", n, a);
    return 0;
}