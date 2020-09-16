
#include<stdio.h>

int length(char*s)
{
   int c = 0;
   while (*s != '\0') {
      c++;
      s++;
   }
   return c;
}


int main()
{
   char str[50];
   int r;

   printf("enter string :: ");
   gets(str);

   r = length(str);
   printf("\nThe length of the given string [ %s ] is : %d\n", str, r);

  return 0;
}
