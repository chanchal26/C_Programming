#include<stdio.h>
#include<string.h>

int is_palindrome(char c[])

{
    int palindrome=1;
    int len=strlen(c);
    for (int i = 0; i < len/2; i++)
    {
        
        if (c[i]!=c[len-i-1])
        {
            palindrome=0;
            break;
        }
        
    }
    return palindrome;
    
}

int main()

{
    char c[100];
    scanf("%s",c);
    if (is_palindrome(c))
    {
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     int i, len;
//     int is_palindrome = 1;
//     scanf("%s", str);

//     len = strlen(str);

//     for(i=0; i<len/2; i++) {
//         if(str[i] != str[len-i-1]) {
//             is_palindrome = 0;
//             break;
//         }
//     }

//     if(is_palindrome) {
//         printf("%s is a palindrome\n", str);
//     } else {
//         printf("%s is not a palindrome\n", str);
//     }

//     return 0;
// }