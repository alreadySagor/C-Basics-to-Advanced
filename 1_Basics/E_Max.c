#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int mx = 0;
    while (n--) {
        int x;
        scanf("%d", &x);
        if (x > mx) {
            mx = x;
        }
    }
    printf("%d\n", mx);
    return 0;
}