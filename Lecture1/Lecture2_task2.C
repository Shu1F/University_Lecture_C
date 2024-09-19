#include <stdio.h>

void func(int n)
{
    static int count = 0;

    count++;
    printf("%dは%d番目の素数\n", n, count);
}

// 引数nが素数かどうかの判定をします
// 素数なら1を戻り値として返し，素数でなければ0を返します
int prime(int n)
{
    int i;
    int sosuu = 1;
    for (i = 2; i < n; i++)
    {
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
