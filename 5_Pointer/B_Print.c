/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 6
**/
#include <stdio.h>

void fun(int x) {
    for (int i = 1; i < x; i++) {
        printf("%d ", i);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    fun(n);
    printf("%d", n);
    return 0;
}