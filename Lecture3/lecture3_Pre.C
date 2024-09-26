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

// #include <stdio.h>

// int sum(int x, int y) {
//     return x + y;
// }

// int main(void) {
//     int a, b, c;
//     a = -3;
//     b = 7;
//     c = sum(a, b);
//     printf("%dと%dの和は%d", a, b, c);
//     return 0;
// }

// #include <stdio.h>

// int multi(int x, int y) {
//     return x * y;
// }

// int main(void) {
//     int a, b, c;
//     a = -3;
//     b = 7;
//     c = multi(a, b);
//     printf("%dと%dの積は%d", a, b, c);
//     return 0;

// }

// #include <stdio.h>

// int max(int x, int y) {
//     int m;
//     m = x;
//     if (m < y) {
//         m = y;
//     }

//     return m;
// }

// int main(void) {
//     int a, b, c;
//     a = -3;
//     b = 7;
//     c = max (a, b);
//     printf("%dと%dのうち大きいほうの値は%d", a, b, c);
//     return 0;
// }

// #include <stdio.h>

// int max3(int x, int y, int z) {
//     int m;
//     m = x;
//     if(m < y) {
//         m = y;
//     }
//     if (m < z) {
//         m = z;
//     }   
//     return m;
// }

// int main (void) {
//     int a, b, c, d;
//     a = -3;
//     b = 7;
//     c = -9;
//     d = max3(a, b, c);
//     printf("%dと%dと%dのうち大きい方の値は%d", a, b, c, d);
//     return 0;
// }

// #include <stdio.h>

// int sumN(int n) {
//     int c, i;
//     c = 0;
//     for(i = 0; i <= n; i++) {
//         c = c + i;
//     }
//     return c;
// }

// int main (void) {
//     int a, n;
//     n = 10;
//     a = sumN(n);
//     printf("1から%dまでの総和は%d", n, a);
//     return 0;
// }

// #include <stdio.h>

// int abs(int x) {
//     return (x > 0) ? x: -x;
// }

// int cube(int x) {
//     return x * x * x;
// }

// int main(void) {
//     int a, b;
//     a = -5;
//     b = cube(abs(a));
//     printf("%dの絶対値の三乗は%d", a, b);
//     return 0;
// }

#include <stdio.h>

int sum(int x, int y) {
    int z = x + y;
    return z;
}

int threeTimes(int z) {
    return z * z * z;
}

int main (void) {
    int a, b, result;
    a = 2;
    b = -3;
    result = threeTimes(sum(a, b));
    printf("%d+%dの三乗は%d", a, b, result);
}