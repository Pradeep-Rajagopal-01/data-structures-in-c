#include <stdio.h>

void add_ten(int *n) {
    *n = *n + 10;
}

int main(void) {
    int a = 1, b = 2;
    int *p = &a;

    *p = 5;
    p = &b;
    *p = *p + a;
    add_ten(p);
    add_ten(&a);

    printf("a = %d, b = %d\n", a, b);
    return 0;
}