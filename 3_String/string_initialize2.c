#include <stdio.h>

int main() {
    char ch[6] = "Sagor\0";
    char sgr[6] = {'S', 'A', 'G', 'O', 'R', '\0'};
    printf("%s\n", ch);
    printf("%s\n", sgr);
    return 0;
}