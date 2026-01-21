#include <stdio.h>

void fun(int* p) {
    printf("in user defined function : %d\n", *p);
    printf("in user defined function : %p\n", p);
    *p = 9999;
}
int main() {
    int x = 10;
    printf("in main function : %d\n", x);
    printf("in main function : %p\n", &x);
    fun(&x);
    printf("in main function : %d\n", x);
    return 0;
}