#include <stdio.h>

int summation(int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

void fun(int* sum, int* s, int* x) {
    if (*sum > *s) {
        printf("NO\n");
        return;
    }
    if ((*s - *sum) % *x == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}

int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        int n, s, x;
        scanf("%d %d %d", &n, &s, &x);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int sum = summation(arr, n);
        fun(&sum, &s, &x);
    }
    return 0;
}