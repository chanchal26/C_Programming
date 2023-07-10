#include<stdio.h>

int main()

{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int hm=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>hm)
        {
            hm=arr[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",hm-arr[i]);
    }
    
    return 0;
}