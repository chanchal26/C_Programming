#include<stdio.h>

void test(int *a)

{
    *a=20;
    printf("test %d\n",*a);
}

int main()

{
    int a=10;
    test(&a);
    printf("main %d",a);
    return 0;
}