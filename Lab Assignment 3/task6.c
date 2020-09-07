#include<stdio.h>
int main()
{
    int input;
    printf("Enter the size of the array: ");
    scanf("%d",&input);
    int elements[input];
    printf("\nEnter array elements: \n");
    int i,j,temp;
    for(i=0; i<input; i++)
        scanf("%d",&elements[i]);
    for(i=0; i<input; i++)
        for(j=0; j<i; j++)
            if(elements[i]>elements[j])
            {
                temp=elements[i];
                elements[i]=elements[j];
                elements[j]=temp;
            }
    printf("\nThe top three largest elements: \n");
    for(i=0; i<3; i++)
        printf(" %d ",elements[i]);
        printf("\n");
    return 0;
}
