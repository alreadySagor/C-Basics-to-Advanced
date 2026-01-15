#include <stdio.h>

int main() {
    int a, b, c, capital, small;
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        capital = a;
    }
    else if (b >= a && b >= c) {
        capital = b;
    } else {
        capital = c;
    }

    if (a <= b && a <= c) {
        small = a;
    }
    else if (b <= a && b <= c) {
        small = b;
    } else {
        small = c;
    }
    printf("%d %d\n", small, capital);
}