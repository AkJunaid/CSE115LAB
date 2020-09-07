#include<stdio.h>
int main()
{
    int input;
    printf("Enter the size of the array: ");
    scanf("%d",&input);
    int elements[input];
    printf("\nEnter array elements: \n");
    int i;
    for(i=0; i<input; i++)
    {
        scanf("%d",&elements[i]);
    }
    printf("\nOdd numbers of the array are: \n\n");
    for(i=0; i<input; i++)
    {
        if(elements[i]%2==1)
            printf(" %d ",elements[i]);
    }
    printf("\n\nEven numbers of the array are: \n\n");
    for(i=0; i<input; i++)
    {
        if(elements[i]%2==0)
            printf(" %d ",elements[i]);
    }
    printf("\n");
    return 0;
}
