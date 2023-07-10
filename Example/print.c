
#include <stdio.h>
#include <string.h>

int main() {
    char ch;
    scanf("%c", &ch);
    char s[100];
    scanf("%s", s);
    getchar();
    char sen[100];
    fgets(sen, 100, stdin);
    printf("%c\n%s\n%s", ch, s, sen);
    return 0;
}