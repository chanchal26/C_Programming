#include<stdio.h>
int main(){

    int num;
    scanf("%d",&num);
    if (num==0)
    {
        printf("Number is Zero");
    }else if (num>0)
    {
        printf("Number is positive");
    }else
    {
        printf("Number is Negative");
    }
    return 0;
    

}