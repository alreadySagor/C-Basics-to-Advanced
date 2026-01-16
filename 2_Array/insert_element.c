#include <stdio.h>

int main() {
    printf("Enter the size of array : ");
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter the element of size %d : ", n);
    for (int i =0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int pos, value;
    printf("Enter the position : ");
    scanf("%d", &pos);
    printf("Enter the value : ");
    scanf("%d", &value);
    for (int i = n; i >= pos + 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}