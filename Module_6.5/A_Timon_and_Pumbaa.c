#include<stdio.h>

int main()

{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    long long int sub=a-b;
    if (sub<0)
    {
        printf("0");
    }else{
        printf("%lld",sub);
    }
    
    return 0;
}