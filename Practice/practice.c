#include<stdio.h>

int sum(int x,int y)

{
    int s=x+y;
    return s;
}

int main()

{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",sum(x,y));
    return 0;
}