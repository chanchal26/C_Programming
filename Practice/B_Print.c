#include<stdio.h>

void count(int n)
{
    for (int i = 1; i < n; i++)
    {
        printf("%d ",i);
    }
    printf("%d",n);
    
}

int main()

{
    int n;
    scanf("%d",&n);
    count(n);
    return 0;
}