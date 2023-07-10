#include<stdio.h>

int main()

{
    int n,s,k;
    scanf("%d",&n);
    // s=n-1;
    // k=1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < s; j++)
    //     {
    //         printf(" ");
    //     }
    //     s--;
    //     for (int j = 0; j < k; j++)
    //     {
    //         printf("*");
    //     }
    //     k+=2;
    //     printf("\n");
        
    // }
    
    s=0;
    k=n*2-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        s++;
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        k-=2;
        printf("\n");
        
    }
    return 0;
}