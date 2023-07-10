#include<stdio.h>

long long int fun(int arr[],int n,int i,long long int sum)

{
    if(i>=n) return sum;
    sum=sum+arr[i];
    fun(arr,n,i+1,sum);
}

int main()

{
    int n,i=0;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    long long int sum=0;
    printf("%lld\n",fun(arr,n,i,sum));
    return 0;
}