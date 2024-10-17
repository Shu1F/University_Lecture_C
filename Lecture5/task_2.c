#include <stdio.h>
int c;
int rec(int n)
{
    c++;
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else
    {
        return -6 * rec(n - 1) - 9 * rec(n - 2);
    }
}

int main(void)
{
    int n = 5;
    printf("数列a%dの値は%d\n", n, rec(n));
    printf("このときrecの呼び出し回数は%d\n", c);
}

// #include <stdio.h>

// int rec(int n)
// {
//     int c;
//     c++;
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
//     int n = 5;
//     printf("数列a%dの値は%d\n", n, rec(n));
//     printf("このときrecの呼び出し回数は%d\n", c);
// }