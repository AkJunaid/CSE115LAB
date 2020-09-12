
#include <stdio.h>
#include <string.h>
void Replace(char arr[],char oldChar, char newChar)
{

    int i;

    for(i = 0; i <= strlen(arr); i++)

    {
        if(arr[i] == oldChar)
        {

            arr[i] = newChar;
        }
    }
    printf("Modified string: %s\n",arr);
}

void main()
{
    char str[100], ch, Newch;
    printf("Enter string: ");
    gets(str);
    printf("Old char: ");
    scanf("%c", &ch);
    getchar();
    printf("New char: ");
    scanf("%c", &Newch);
    Replace(str,ch,Newch);
}
