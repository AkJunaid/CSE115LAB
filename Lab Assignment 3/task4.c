#include<stdio.h>
int main()
{
    int x, y, z, i, j,temp;

    int a[100], b[100], merge[200];

    printf("Enter the size of first array: ");

    scanf("%d",&x);

    printf("\nEnter the elements of first array: \n");

    for(i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the size of second array: ");
    scanf("%d", &y);

    printf("\nEnter the elements of second array: \n");
    for(i = 0; i < y; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < x; i++)
    {
        merge[i] = a[i];
    }

    z = x + y;

    for(i = 0, j = x; j < z && i < y; i++, j++)
    {
        merge[j] = b[i];
    }

    for (i = 0; i < z; ++i)
    {
        for (j = i + 1; j < z; ++j)
        {
            if (merge[i] > merge[j])
            {

                temp = merge[i];

                merge[i] = merge[j];

                merge[j] = temp;
            }
        }
    }

    printf("\nMerge those arrays and will also sort the array in ascending/descending order: \n");

    for(i = 0; i < z; i++)
    {
        printf(" %d ",merge[i]);
    }
    printf("\n");
    return 0;
}



