/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int x;
        scanf("%d", &x);
        if (x == 2) {
            printf("2\n");
        }
        else if (x == 3) {
            printf("3\n");
        }
        else if (x % 2 == 0) {
            printf("0\n");
        } else {
            printf("1\n");
        }
    }
    return 0;
}