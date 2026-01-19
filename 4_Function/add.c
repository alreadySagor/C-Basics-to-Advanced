#include <stdio.h>

// Example of return + parameter function.
int add(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = add(a, b);
    printf("Sum is : %d\n", sum);
    return 0;
}