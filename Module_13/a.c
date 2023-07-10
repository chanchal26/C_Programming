#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{

    int l = 0;
    int h = strlen(str) - 1;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            return 0;
        }
    }
    return 1;

}

int main()
{
    char str[11];
    scanf("%s", str);

    int num = is_palindrome(str);

    if (num == 1)
    {
        printf("%s is a palindrome\n", str);
    }
    else
    {
        printf("%s is not a palindrome\n", str);
    }

    return 0;
}