#include<stdio.h>

int main()

{
    int a,b;
    scanf("%d %d",&a,&b);
    int x=a+b,y=a-b;
    double c,d;
    scanf("%lf %lf",&c,&d);
    double m=c+d,n=c-d;
    printf("%d %d\n",x,y);
    printf("%lf %0.2lf\n",m,n);
    return 0;
}