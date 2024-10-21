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

// #include <stdio.h>

// void func(int n)
// {
//     static count = 0;
//     count++;
//     printf("%dは%d番目の素数\n", n, count);
// }

// int prime(int n)
// {
//     int i;
//     int sosuu = 1;
//     for (i = 2; i < n; i++)
//     {
//         // prime = 2 の時はそもそもこのループに入らずにsosuu = 1をreturnする。
//         if (n % i == 0)
//         {
//             sosuu = 0;
//             break;
//         }
//     }
//     return sosuu;
// }

// int main(void)
// {
//     int x;
//     for (int i = 2; i < 20; i++)
//     {
//         x = prime(i);
//         if (x == 1)
//         {
//             func(i);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// double max(double, double);
// double calc_abs(double);
// double cube(double);

// int main(void)
// {
//     double a, b;
//     a = -3.2;
//     b = 1.4;
//     printf("max(|%f|, (%f)^3) = %f\n", a, b, max(calc_abs(a), cube(b)));
//     return 0;
// }

// double max(double x, double y)
// {
//     return (x > y) ? x : y;
// }

// double calc_abs(double x)
// {
//     return (x > 0) ? x : -x;
// }

// double cube(double x)
// {
//     return x * x * x;
// }

// #include <stdio.h>
// int max(int, int);

// int main(void)
// {
//     int a = 1;
//     int b = 2;
//     int c = 3;
//     int d = 4;

//     printf("最大値は%dです。", max(max(a, b), max(c, d)));
//     return 0;
// }

// int max(int x, int y)
// {
//     if (x > y)
//     {
//         return x;
//     }
//     else
//     {
//         return y;
//     }
// }
// #include <stdio.h>
// int rec(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return rec(n - 1) + n * n;
//     }
// }

// int main(void)
// {
//     for (int n = 1; n <= 4; n++)
//     {
//         printf("1から%dまでの二乗和の値は%d\n", n, rec(n));
//     }
//     return 0;
// }

// #include <stdio.h>
// int rec(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return rec(n - 2) + n;
//     }
// }

// int main(void)
// {
//     int n = 11;
//     printf("%d以下の正の奇数の和は%d\n", n, rec(n));
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int n = 4;
//     int a, b = 3, c = 2;
//     for (int i = 3; i <= n; i++)
//     {
//         a = 2 * b + c;
//         c = b;
//         b = a;
//     }
//     printf("数列のa%dの値は%d\n", n, a);
//     return 0;
// }

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
        printf("第%d項：%d\n", i, rec(i));
    }
}