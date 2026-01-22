/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 6      
**/
#include <stdio.h>
#include <limits.h>

void fun(int* arr, int n) {
    int mx = arr[0], mn = arr[0];
    for (int i = 0; i < n; i++) {
        if (*(arr + i) > mx) {
            mx = *(arr + i);
        }
        else if (*(arr + i) < mn) {
            mn = *(arr + i);
        }
    }
    printf("%d %d\n", mn, mx);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    fun(arr, n);
    return 0;
}