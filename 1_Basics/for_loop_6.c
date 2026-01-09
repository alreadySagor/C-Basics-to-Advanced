#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0, i;
    for (int i = 1; i <= n; i = i + 1) {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}