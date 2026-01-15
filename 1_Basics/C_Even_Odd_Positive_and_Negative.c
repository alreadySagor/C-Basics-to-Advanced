#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x, even = 0, odd = 0, negative = 0, positive = 0;
    while (n--) {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        if (x < 0) {
            negative++;
        } 
        else if (x > 0) {
            positive++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);
    return 0;
}