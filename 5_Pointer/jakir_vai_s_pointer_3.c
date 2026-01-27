#include <stdio.h>

int main() {
    int a = 5;
    int* ip;
    ip = &a;
    printf("Value of *ip variable : %d\n", *ip); 
    return 0;
}