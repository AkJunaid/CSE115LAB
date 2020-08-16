
#include <stdio.h>

int main()
{
    int i, j, rows; // take i as rows, j as columns and rows for take the value of rows//

    /* Input rows to print from user */
    printf("Enter number of rows : "); // enter the value of rows //
    scanf("%d", &rows);

    for(i=1; i<=rows; i++) // the value of i is less then and equal to rows and will print new lines //
    {
        for(j=i; j<rows; j++) // the value of j is less then rows and will print space //
        {
            printf(" "); // for print space //
        }
        for(j=1; j<=(2*i-1); j++) // the value of j is less then and equal to (2*i-1) //
        {
            if(i==rows || j==1 || j==(2*i-1)) // if the value of i is equal to rows or j is equal to 1 or j is equal to (2*i-1) it will print star else space //
            {
                printf("*"); // for print star //
            }
            else
            {
                printf(" "); // for print space //
            }
        }
        printf("\n"); // for print new lines //
    }

    return 0;
}
