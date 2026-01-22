#include <stdio.h>
#include <string.h>

// void fun(char ch[]) {
//     printf("%s\n", ch);
//     printf("Length of string : %d\n", strlen(ch));
// }

void fun(char* ch) {
    printf("%s\n", ch);
    printf("Length of string : %d\n", strlen(ch));
}
int main() {
    // char ch[6] = {'H', 'e', 'l', 'l', 'o'};
    char ch[6] = "Hello";
    fun(ch);
    return 0;
}