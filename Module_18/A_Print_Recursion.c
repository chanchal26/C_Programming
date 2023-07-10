#include<stdio.h>

void fun(int n,int c)

{
    
    if(n==c) return;
    c=c+1;
    printf("I love Recursion\n");
    fun(n,c);
}

int main()

{
    int n;
    scanf("%d",&n);
    int cnt=0;
    fun(n,cnt);
    return 0;
}