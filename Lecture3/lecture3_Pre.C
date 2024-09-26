// #include <stdio.h>

// int square(int x) {
//     return x * x;
// }

// int main(void) {
//     int a, b;
//     a = -3;
//     b = square(a);
//     printf("%dの二乗は%d", a, b);
//     return 0;
// }

// #include <stdio.h>

// int absolute(int x)
// {
//     if (x < 0)
//     {
//         x = -1 * x;
//     }
//     return x;
// }

// int main(void)
// {
//     int a, b;
//     a = -3;
//     b = absolute(a);
//     printf("%dの絶対値は%d", a, b);
//     return 0;
// }

// #include <stdio.h>

// int cube(int x) {
//     return x * x * x;
// }

// int main(void) {
//     int a, b;
//     a = -3;
//     b = cube(a);
//     printf("%dの三乗は%d", a, b);
//     return 0;
// }

#include <stdio.h>

int sum(int x, int y) {
    return x + y;
}

int main(void) {
    int a, b, c;
    a = -3;
    b = 7;
    c = sum(a, b);
    printf("%dと%dの和は%d", a, b, c);
    return 0;
}