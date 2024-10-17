// #include <stdio.h>
// 階乗計算を再帰を用いて行う
// int factorial(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial(n - 1);
//     }
// }

// int main(void)
// {
//     int n = 3;
//     printf("1から%dまでの積は%d\n", n, factorial(n));
//     return 0;
// }

// //再帰を用いる形
// #include <stdio.h>

// int rec(int n)
// {
//     if (n == 1)
//     {
//         return 5;
//     }
//     else
//     {
//         return 3 * rec(n - 1) + 4;
//     }
// }

// int main(void)
// {
//     int n = 4;
//     printf("数列anの%d番目の値は%d\n", n, rec(n));
// }

// //再帰を用いない形
// #include <stdio.h>

// int main(void)
// {
//     int a, an;
//     n = 4;
//     an = 5;
//     for (int i = 1; i < n; i++)
//     {
//         an = 3 * an + 4;
//     }

//     printf("数列anの%d番目の値は%d\n", n, an);
//     return 0;
// }

// #include <stdio.h>
// a{n} = 2a{n-1} + 3, a{0}=-2(再帰あり版)
// int rec(int n)
// {
//     if (n == 0)
//     {
//         return -2;
//     }
//     else
//     {
//         return 2 * rec(n - 1) + 3;
//     }
// }

// int main(void)
// {
//     int n = 4;
//     printf("数列anの%d番目の値は%d\n", n, rec(n));
//     return 0;
// }

// #include <stdio.h>
// // a{n}=2a_{n-1}+3, a{0}=-2(再帰無し版)
// int main(void)
// {
//     int n, an;
//     n = 4;
//     an = -2;
//     for (int i = 0; i < 4; i++)
//     {
//         an = 2 * an + 3;
//     }

//     printf("数列anの%d番目の値は%d\n", n, an);
//     return 0;
// }

// #include <stdio.h>
// // 再帰を用いて1からnまでの二乗和1^2 + 2^2 + 3^2 + ... + n^2を計算する
// int rec(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * n + rec(n - 1);
//     }
// }
// int main(void)
// {
//     int n = 4;
//     printf("1から%dまでの二乗和の値は%d\n", n, rec(n));
//     return 0;
// }
