#include<stdio.h>

int main()

{
    char x;
    scanf("%c",&x);
    if (x>='a' && x<='z')
    {
        int sum=x-32;
        printf("%c",sum);
    }else if (x>='A' && x<='Z')
    {
        int sum=x+32;
        printf("%c",sum);
    }
    
    
    return 0;
}