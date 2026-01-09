#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("This is a Even number\n");
    } else {
        printf("This is a Odd number\n");
    }
    return 0;
}