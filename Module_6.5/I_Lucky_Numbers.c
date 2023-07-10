#include<stdio.h>

int main()

{
    int n,mod,div;
    scanf("%d",&n);
    mod=n%10;
    div=n/10;
    if (mod%div==0 || div%mod==0)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}