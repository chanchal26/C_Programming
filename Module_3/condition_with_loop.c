#include<stdio.h>
int main(){

    int i;
    for ( i = 1; i <=10; i++)
    {
        if (i%2==0)
        {
            printf("%d -even\n",i);
        }else{
            printf("%d -odd\n",i);
        }
        if (i==8)
        {
            break;
        }
        
    }
    
    return 0;
}