#include <stdio.h>
#include <string.h>
void count(char arr[])
{

    int i,v=0,c=0;
    for(i=0;arr[i];i++){
    	if((arr[i]>=65 && arr[i]<=90)|| (arr[i]>=97 && arr[i]<=122))
    	{

            if(arr[i]=='a'|| arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
		      v++;
            else
             c++;
        }

 	}


    printf("\nvowels = %d\n",v);
    printf("\nconsonants = %d\n",c);


}

int main()
{
    char s[1000];


    printf("Enter string: ");
    gets(s);

    count(s);

    return 0;

    }


