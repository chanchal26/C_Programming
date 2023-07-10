#include<stdio.h>

void fun(int arr[],int n,int i)

{
    if(n<=i) return;
    fun(arr,n,i+2);
    printf("%d ",arr[i]);
    
}

int main()

{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int i=0;
    fun(arr,n,i);
    return 0;
}