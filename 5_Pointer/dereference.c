#include <stdio.h>

int main() {
    int x = 10;
    printf("Address : %p\n", &x);
    int *p = &x;
    printf("Access Value unsing poniter : %d\n", *p);

    *p = 100;
    printf("Value using dereference : %d\n", x);
    return 0;
}