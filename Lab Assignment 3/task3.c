#include <stdio.h>
int main()
{
    int input;
    printf("Enter size of the array: ");
    scanf("%d",&input);

    printf("\nEnter the elements of the array: \n");
    int a[input];
    int i,j,c=0;
    for(i=0 ; i<input; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<input; i++)
    {
        for(j=i+1 ; j<input ; j++)
        {
            if(a[i]==a[j])
            {
                printf("\nDuplicate Number is: %d\n",a[i]);
                printf("\nIndex of duplicate(%d) numbers: %d, %d\n\n",a[i],i,j);
                c=1;
            }
        }
    }
    if(c==0)
    {
        printf("\nNo duplicate number.\n");
    }

    return 0;
}
