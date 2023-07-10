#include<stdio.h>
#include<string.h>

int main()

{
    char s[1001];
    scanf("%s",s);
    int capital=0,small=0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]<='z' && s[i]>='a')
        {
            small++;
        }else if (s[i]>='A' && s[i]<='Z')
        {
            capital++;
        }
        
    }

    printf("%d %d",capital,small);

    return 0;
}