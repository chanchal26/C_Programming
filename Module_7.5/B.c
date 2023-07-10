#include<stdio.h>

int main()

{
    int n;
    scanf("%d",&n);
    long long int a[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
    }

    long long int x;
    scanf("%lld",&x);

    for (int i = 0; i < n; i++)
    {
        if (x==a[i])
        {
            printf("%d\n",i);
            return 0;
        }
        
    }
    printf("-1\n");
    
    
    return 0;
}