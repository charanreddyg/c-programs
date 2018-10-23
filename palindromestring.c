#include<stdio.h>
int main()
{
   char string[100],palindrome(string);
   int result;
 
   printf("Input a string\n");
   gets(string);
 
   result = palindrome(string);
 
   if (result == 1)
      printf("\"%s\" is a palindrome string.\n", string);
   else
      printf("\"%s\" isn't a palindrome string.\n", string);
 
   return 0;
}
