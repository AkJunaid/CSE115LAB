#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0,len = 0;
    char s[50];

    printf("Enter String: ");
    gets(s);

    while(s[i] != '\0')
    {
        i++;
        len++;
    }
    printf("length: %d",len);

    return 0;
}
