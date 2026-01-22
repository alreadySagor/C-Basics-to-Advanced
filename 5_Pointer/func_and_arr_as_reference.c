/*
function e array pass kora mane hocche reference / address pass kora.
*/

#include <stdio.h>

void fun(int* arr, int n) {
    arr[0] = 99;
    // arr[1] = 8;
    // arr[3] = 500;
}
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    fun(arr, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}