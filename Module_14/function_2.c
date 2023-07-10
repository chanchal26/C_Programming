#include<stdio.h>

int sum(void)
{
    int a,b,s;
    scanf("%d %d",&a,&b);
    s=a+b;
    return s;
}

int main()

{
    printf("%d",sum());
    return 0;
}