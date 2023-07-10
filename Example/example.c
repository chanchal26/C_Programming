#include <stdio.h>

int main() {
   char input[100];
   
   fgets(input, sizeof(input), stdin);
   
   printf("Hello, World!\n%s", input);
   
   return 0;
}
