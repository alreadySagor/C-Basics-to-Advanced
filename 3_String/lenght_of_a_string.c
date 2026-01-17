#include <stdio.h>
#include <string.h>

int main() {
    char ch[100];
    // scanf("%s", &ch);
    gets(ch);
    // int count = 0;
    // for (int i = 0; ch[i] != '\0'; i++) {
    //     count++;
    // }
    // printf("Length : %d\n", count);
    printf("Length : %d\n", strlen(ch));
    return 0;
}