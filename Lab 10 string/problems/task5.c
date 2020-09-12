
#include <stdio.h>
int compare(char str1[], char str2[])
{
    int flag = 0, i;
    for(i=0; str1[i]!='\0' && str2[i]!='\0'; i++){
        if(str1[i] > str2[i]){
            return 1;
        }
        else if(str1[i] < str2[i]){
            return -1;
        }
        else{
            flag = 0;
        }
    }
    return flag;
}

int main()
{
    char ch1[100], ch2[100];
    printf("Enter str1: ");
    gets(ch1);
    printf("Enter str2: ");
    gets(ch2);
    printf("%d", compare(ch1, ch2));
    return 0;
}
