#include<stdio.h>

int main()

{
    int x,a;
    scanf("%d",&x);
    a=x/1000;
    if (a%2==0)
    {
        printf("EVEN");
    }else{
        printf("ODD");
    }
    
    return 0;
}