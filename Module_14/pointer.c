#include<stdio.h>

int main()

{
    int x=10;
    int* p=&x;
    printf("%p\n",p);
    printf("%p\n",&x);
    printf("%d\n",*p);
    *p=50;
    printf("%d\n",x);
    return 0;
}