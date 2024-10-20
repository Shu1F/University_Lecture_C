// #include <stdio.h>

// int square(int x)
// {
//     return x * x;
// }

// int main(void)
// {
//     int a, b;
//     a = 6;
//     b = square(a);
//     prnt("%d の二乗は %d\n", a, b);
//     return 0;
// }

// #include <stdio.h>
// int x = 11;
// int main(void)
// {
//     int y = 10;
//     printf("グローバル変数の値：%d, ローカル変数：%d \n", x, y);
//     return 0;
// }

// #授業課題1-1
// #include <stdio.h>

// int sum(int n)
// {
//     int result = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         result += i;
//     }
//     return result;
// }

// int main(void)
// {
//     int a, b;
//     a = 10;
//     b = sum(a);
//     printf("1から%dまでの和は%d", a, b);
//     return 0;
// }

// #授業課題1-2

// #include <stdio.h>

// void print_number(int n)
// {
//     printf("%-3d", n);
// }

// void print_star(int n)
// {
//     print_number(n);

//     for (int i = 0; i < n; i++)
//     {
//         printf("*");
//     }

//     printf("\n");
// }

// int main(void)
// {
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         print_star(i);
//     }
//     return 0;
// }

// #授業課題 2-2

#include <stdio.h>

void func(int n)
{
    static count = 0;
    count++;
    printf("%dは%d番目の素数\n", n, count);
}

int prime(int n)
{
    int i;
    int sosuu = 1;
    for (i = 2; i < n; i++)
    {
        // prime = 2 の時はそもそも個のループに入らずにsosuu = 1をreturnする。
        if (n % i == 0)
        {
            sosuu = 0;
            break;
        }
    }
    return sosuu;
}

int main(void)
{
    int x;
    for (int i = 2; i < 20; i++)
    {
        x = prime(i);
        if (x == 1)
        {
            func(i);
        }
    }
    return 0;
}