#include<stdio.h>

int main()

{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int i=0;
    while (1)
    {
        if (a[i]=='\0' && b[i]=='\0')
        {
            printf("they are same");
            break;
        }
        else if (a[i]=='\0')
        {
            printf("%s is small",a);
            break;
        }
        else if (b[i]=='\0')
        {
            printf("%s is small",b);
            break;
        }

        if (a[i]==b[i])
        {
            i++;
        }
        else if (a[i]<b[i])
        {
            printf("%s is small",a);
            break;
        }
        else if (b[i]<a[i])
        {
            printf("%s is small",b);
            break;
        }
        
        
    }
    
    return 0;
}