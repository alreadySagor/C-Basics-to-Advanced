#include <stdio.h>

int main() {
    int tk;
    scanf("%d", &tk);
    if (tk >= 100) {
        printf("Burger Khabo\n");
    }
    else if (tk >= 50) {
        printf("Fuchka Khabo\n");
    }
    else if (tk >= 20) {
        printf("Ice Cream Khabo");
    } else {
        printf("Kichui Khabo na\n");
    }
    return 0;
}