#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    printf("address of 0th index : %p\n", &arr[0]);
    printf("address of 0th index : %p\n", &arr);

    printf("Value of index 0 : %d\n", arr[0]);
    printf("Value of index 0 : %d\n", *arr);

    printf("Value of index 1 : %d\n", *(arr + 1));
    // printf("Value of index 1 : %d\n", arr[1]);
    printf("Value of index 2 : %d\n", *(2 + arr));
    // printf("Value of index 2 ------: %d\n", 2[arr]);
    printf("Value of index 3 : %d\n", *(arr + 3));
    printf("Value of index 4 : %d\n", *(4 + arr));
    return 0;
}

/*
jokhon amra ekti array declare kori tokhon array er naam ta array er 0th index er address ke point kore.
tai &arr lekhar fole array er 0th index er address peyechi.
    *arr lekhar fole array er 0th index er value peyechi.

tai bole jay --> arr = &arr[0], jekhane arr ekti integer pointer (int *arr).

-------------------
arr[0] -- *(arr)
arr[1] -- *(arr + 1)
arr[2] -- *(arr + 2)
arr[3] -- *(arr + 3)

*(arr) -- arr[0]
*(arr + 1) -- arr[1]
*(arr + 2) -- arr[2]
*(arr + 3) -- arr[3]

*(1 + arr) -- 1[arr]
*(2 + arr) -- 2[arr]
*(3 + arr) -- 3[arr]
*/