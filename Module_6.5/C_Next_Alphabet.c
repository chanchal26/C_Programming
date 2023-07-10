#include<stdio.h>

int main()

{
    char a;
    scanf("%c",&a);
    if (a=='z')
    {
        printf("a");
    }else{
        int l=a+1;
        printf("%c",l);
    }
    
    return 0;
}