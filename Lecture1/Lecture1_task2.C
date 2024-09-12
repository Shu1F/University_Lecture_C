#include <stdio.h>
void print_number(int n)
{
    printf("%-3d", n);
}

void print_star(int n)
{
    print_number(n);
    // ここから
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    // ここまで書く
    printf("\n");
}

int main(void)
{
    int i;
    for (i = 0; i < 5; i++)
        print_star(i);
    return 0;
}