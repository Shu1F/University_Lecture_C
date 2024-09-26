#include <stdio.h>
int x;

void mondai1(int b) {
    x = b;
}
void mondai2(void) {
    static int c = 10;
    x = c;
    c++;
}
int mondai3(int d) {
    x++;
    d++;
    return d;
}

int main (void) {
    printf("x = %d\n", x);

    x = 101;
    printf("x = %d\n", x);

    mondai1(102);
    printf("x = %d\n", x);

    mondai2();
    mondai2();
    mondai2();
    printf("x = %d\n", x);

    for (int i = 103; i < 104; i++)
    {
        int x = i;
        printf("x = %d\n", x);

        x = mondai3(i);
        printf("x = %d\n", x);
    }
    
    printf("x = %d\n", x);
    return 0;

}


// printf 0:
// グローバル変数でなので初期値は０。

// printf 101:
// グローバル変数に101が代入されそのまま出力されるので101。

// printf 102:
// 102がmondai1に渡され、グローバル変数xに代入されるので102。

// printf 12:
// staticは初期化されず、保持するので初期値0を含め3回呼び出すとともにc++するので12。

// printf 103:
// ローカル変数xに103を代入して、そのまま出力するため103。

// printf 104:
// iに103を代入する。mondai3の時のxはグローバル変数なのでこの時のxはx++より13。またint dが宣言されているのでd++より104になり、dを返すので104を出力する。

// printf 13:
// mondai3で1増加しているので13。