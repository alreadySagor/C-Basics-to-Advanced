#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zero++;
        }
        else if (arr[i] == 1) {
            one++;
        }
        else if (arr[i] == 2) {
            two++;
        }
    }
    printf("0 : %d\n1 : %d\n2 : %d\n", zero, one, two);
    return 0;
}