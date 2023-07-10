#include<stdio.h>

void fun(int n,int i)

{
    if(i==n) return;
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&arr[i]);
    }
    int ans=arr[0]-(arr[1]+arr[2]+arr[3]);
    printf("%d\n",ans);
    fun(n,i+1);
}

int main()

{
    int n;
    scanf("%d",&n);
    fun(n,0);
    return 0;
}