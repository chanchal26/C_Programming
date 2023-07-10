#include<stdio.h>

void fun(int t,int x)

{
    if(t<x) return;
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int s;
    scanf("%d",&s);
    int flag=0,w=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==s)
        {
            flag=1;
            w=i+1;
            break;
        }
    }
    if (flag==0)
    {
        printf("Case %d: Not Found\n",x);
    }else{
        printf("Case %d: %d\n",x,w);
    }
    
    fun(t,x+1);
}

int main()

{
    int t;
    scanf("%d",&t);
    fun(t,1);
    return 0;
}