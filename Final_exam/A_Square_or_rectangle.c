#include<stdio.h>

void fun(int n,int i)

{
    if(i==n) return;
    int arr[2];
    for (int i = 0; i < 2; i++)
    {
        scanf("%d",&arr[i]);
    }
    if (arr[0]==arr[1])
    {
        printf("Square\n");
    }else{
        printf("Rectangle\n");
    }
    fun(n,i+1);
}

int main()

{
    int n;
    scanf("%d",&n);
    fun(n,0);
    return 0;
}