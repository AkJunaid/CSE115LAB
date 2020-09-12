
#include<stdio.h>
void reverse(char arr[])
{
    {
        int i=0, j=0, temp;
        j = strlen(arr) - 1;

        while (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        printf("Reverse order: %s\n", arr);
    }
}

void main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    reverse(str);
}

