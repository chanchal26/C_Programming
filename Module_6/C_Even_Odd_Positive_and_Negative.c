#include<stdio.h>

int main()

{
    int n,a,i;
    int P=0,N=0,E=0,O=0;
    scanf("%d\n",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a);
        if (a>0)
        {
            P++;
            
        }else if (a<0)
        {
            N++;
            
        }

        if (a%2==0)
        {
            E++;
            
        }else{
            O++;
            
        }
        
    }
        printf("Even: %d\n",E);
        printf("Odd: %d\n",O);
        printf("Positive: %d\n",P);
        printf("Negative: %d\n",N);
    return 0;
}