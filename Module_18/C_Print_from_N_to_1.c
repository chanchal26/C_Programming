#include<stdio.h>

void fun(int n,int i)

{
    if(i>n) return;
    fun(n,i+1);
    printf("%d",i);
    if (i>1)
    {
        printf(" ");
    }
    
}

int main()

{
    int n;
    scanf("%d",&n);
    int i=1;
    fun(n,i);
    return 0;
}