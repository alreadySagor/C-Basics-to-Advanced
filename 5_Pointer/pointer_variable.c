#include <stdio.h>

int main() {
    int x = 10;
    printf("Address : %p\n", &x);
    
    // pointer variable.
    int *p = &x;
    printf("Address of x using pointer variable : %p\n", p);
    return 0;
}