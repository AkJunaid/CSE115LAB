#include<stdio.h>
#include<string.h>
void search(char arr[], char key)
{
    char c;
    while (c<arr[c] && key != arr[c]){
        c++;
    }

   if (c < arr[c])
    {
      printf("Found");
    }
   else
    {
      printf("not found");
    }


}
int main()
{
    int s[50] ;
    char key;

    printf("Enter String: ");
    gets(s);

    printf("Which letter: ");
    scanf("%c",&key);

    search(s, key);





    return 0;

}

