#include <stdio.h>
#include <string.h>

int main() {
    char ch[100];
    scanf("%s", ch);
    int cnt[26] = {0};
    for (int i = 0; i < strlen(ch); i++) {
        cnt[ch[i] - 'a']++;
    }
    for (int i = 0; i < strlen(ch); i++) {
        if (cnt[ch[i] - 97] != 0) {
            printf("%c - %d\n", (ch[i] - 97) + 'a', cnt[ch[i] - 97]);
        }
        cnt[ch[i] - 97] = 0;
    }
    return 0;
}