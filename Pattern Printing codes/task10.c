

#include <stdio.h>

int main()
{
    int i, j, rows; // take i as rows,j as columns and rows for input the value //
    printf("Enter rows : "); // input the value of rows //
    scanf("%d", &rows);


    for(i=1; i<=rows; i++) // the value of i is less then and equal to rows and it will print new lines //
    {
        for(j=1; j<=rows-i; j++) // the value of j is less then and equal to rows-1 and it will print space //
        {
            printf(" "); // for print space //
        }
        for(j=1; j<=rows; j++) // the value of j is less then and equal to rows and it will print star ( * ) and space //
        {
            if(i==1 || i==rows || j==1 || j==rows) // the value of i is equal to 1 or i is equal to rows or j is equal to 1 or j is equal to rows then it will print star ( * ) else it will print space //
                printf("*"); // for print star ( * ) //
            else
                printf(" "); // for print space //
        }

        printf("\n"); // for print new line //
    }

    return 0;
}
