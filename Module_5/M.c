#include<stdio.h>

int main()

{
    char x;
    scanf("%c",&x);
    if (x>=48 && x<=57)
    {
        printf("IS DIGIT");
    }else if (x>=65 && x<=90)
    {
        printf("ALPHA\nIS CAPITAL");
    }else{
        printf("ALPHA\nIS SMALL");
    }
    
    
    return 0;
}