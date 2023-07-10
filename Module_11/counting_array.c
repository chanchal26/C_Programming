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
    int cnt[7]={0};
    for (int i = 0; i < n; i++)
    {
        cnt[arr[i]]++;
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d- %d\n",i,cnt[i]);
    }
    
    
    // printf("1- %d\n",cnt[1]);
    // printf("2- %d\n",cnt[2]);
    // printf("3- %d\n",cnt[3]);
    // printf("4- %d\n",cnt[4]);
    
    return 0;
}