#include<stdio.h>

int main()

{
    int n;
    scanf("%d",&n);
    int arr[2];
    int tiger=0,pathan=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&arr[j]);
        }
        if (arr[0]>arr[1])
        {
            tiger++;
        }else if (arr[0]<arr[1])
        {
            pathan++;
        }
    }
    
    if (tiger>pathan)
    {
        printf("Tiger");
    }else if (pathan>tiger)
    {
        printf("Pathan");
    }else{
        printf("Draw");
    }
    
    return 0;
}