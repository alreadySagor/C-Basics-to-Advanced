#include <stdio.h>

void fun(char* ch) {
    ch[0] = 'G';
}
int main() {
    char ch[] = "Hello";
    printf("%s\n", ch);
    fun(ch);
    printf("%s\n", ch);
    return 0;
}