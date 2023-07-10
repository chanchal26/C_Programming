#include<stdio.h>
#include<string.h>

int main()

{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int c=strcmp(a,b);
    if (c>0)
    {
        printf("%s is bigger then %s",a,b);
    }
    else if (c<0)
    {
        printf("%s is bigger then %s",b,a);
    }else{
        printf("%s and %s are same",a,b);
    }
    
    return 0;
}