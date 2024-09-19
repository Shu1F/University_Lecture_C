#include <stdio.h>
void func(void) {
    int count = 0;
    count ++;
    printf("funcの実行数：%d\n", count);
}

int main(void) {
    func();
    func();
    func();
    func();

    return 0;
}

#include <stdio.h>
void func(void) {
    static int count = 0;
    count ++;
    printf("funcの実行数：%d\n", count);
}

int main(void) {
    func();
    func();
    func();
    func();

    return 0;
}