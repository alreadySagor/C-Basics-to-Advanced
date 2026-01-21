#include <stdio.h>

int main() {
    int number = 10;
    double long_decimal_number = 100.10203;
    long long int big_number = 100000000000;
    float decimal_number = 10.111;
    char ch = 'S';

    int* ptr_for_number = &number;
    double* ptr_for_long_decimal_number = &long_decimal_number;
    long long int* ptr_for_big_number = &big_number;
    float* ptr_for_decimal_number = &decimal_number;
    char* ptr_for_ch = &ch;
    
    printf("Size of integer number : %zu\n", sizeof(number));
    printf("Size of double number : %zu\n", sizeof(long_decimal_number));
    printf("Size of long long integer number : %zu\n", sizeof(big_number));
    printf("Size of float number : %zu\n", sizeof(decimal_number));
    printf("Size of character : %zu\n", sizeof(ch));

    printf("-------------------\n");
    printf("Size of integer number : %zu\n", sizeof(*ptr_for_number));
    printf("Size of double number : %zu\n", sizeof(*ptr_for_long_decimal_number));
    printf("Size of long long integer number : %zu\n", sizeof(*ptr_for_big_number));
    printf("Size of float number : %zu\n", sizeof(*ptr_for_decimal_number));
    printf("Size of character : %zu\n", sizeof(*ptr_for_ch));
    printf("-------------------\n");
    printf("Size of integer's ptr : %zu\n", sizeof(ptr_for_number));
    printf("Size of double's ptr : %zu\n", sizeof(ptr_for_long_decimal_number));
    printf("Size of long long integer's ptr : %zu\n", sizeof(ptr_for_big_number));
    printf("Size of float's ptr : %zu\n", sizeof(ptr_for_decimal_number));
    printf("Size of ch's ptr : %zu\n", sizeof(ptr_for_ch));
    return 0;
}