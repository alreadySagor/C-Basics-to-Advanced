#include <stdio.h>

void fun(int* p) {
    printf("value of p : %p\n", p);
    printf("Value of x (inside user define function) : %d\n", *p);
    *p = 500;
}
int main() {
    int x = 10;
    printf("address of x : %p\n", &x);
    fun(&x);
    printf("Value of x : %d\n", x);
    return 0;
}