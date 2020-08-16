
#include <stdio.h>

int main()
{
    int i, j, rows; // take i as rows,j as columns and take rows for input the value //
    printf("Enter number of rows: "); // input the value of rows //
    scanf("%d", &rows);
    for(i=1; i<=rows; i++) // the value of i is less then and equal to rows and will print new line //
    {
        for(j=1; j<i; j++) // the value of j is less then i and will print space //
        {
            printf(" "); // for print space //
        }
        for(j=1; j<=(rows*2 - (2*i-1)); j++) // the value of j is less then and equal to (rows*2-(2*i-1)) then it it will print star and space //
        {
            if(i==1 || j==1 || j==(rows*2 - (2*i - 1))) // if the value of i is equal to 1, j is equal to 1 and j is equal to (rows*2-(2*1-1)) then it will print star else it will print space //
            {
                printf("*"); // for print star //
            }
            else
            {
                printf(" "); // for print space //
            }
        }
        printf("\n"); // for print new line //
    }

    return 0;
}
