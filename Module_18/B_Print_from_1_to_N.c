#include<stdio.h>

void fun(int n,int i)

{
    if(i>n) return;
    printf("%d\n",i);
    fun(n,i+1);
}

int main()

{
    int n;
    scanf("%d",&n);
    int i=1;
    fun(n,i);
    return 0;
}