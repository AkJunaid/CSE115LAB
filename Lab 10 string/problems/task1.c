
#include<stdio.h>
int length(char arr[]);
int main()
{
    char s[50];
    int length1;


    printf("Enter String: ");
    gets(s);
    length1= length(s);
    return 0;
}
int length(char arr[])
{
    int len = 0;
    while(arr[len] != '\0')
    {
        len++;
    }
    printf("Length: %d", len);
    return len;
}
