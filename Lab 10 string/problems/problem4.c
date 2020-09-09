#include<stdio.h>
#include<string.h>
void reverse(char arr[])
{
    {
    int i=0 , j=0 , temp;

   j = strlen(arr) - 1;

   while (i < j)
    {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j--;
    }

    printf("\nReverse string is: %s\n", arr);

 }

}

int main()
{
   char str[100];

   printf("Enter the string: ");
   gets(str);

   reverse(str);

   return 0;
}

