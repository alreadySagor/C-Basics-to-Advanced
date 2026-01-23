/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 6
**/
#include <stdio.h>

int fun(int* a, int* b) {
    return *a + *b;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", fun(&a, &b));
    return 0;
}