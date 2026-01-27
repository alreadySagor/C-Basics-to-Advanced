#include <stdio.h>

int main() {
    int a = 5;
    int* ip;
    ip = &a;
    printf("Address of a variable : %x\n", &a);
    printf("Address stored in ip variable : %x\n", ip);
    return 0;
}