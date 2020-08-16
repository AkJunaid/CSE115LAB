
#include <stdio.h>

int main()
{
    int i, j, rows; // lets take i as rows,j as column and rows for take input //
    printf("Enter number of rows: "); // take the value of rows //
    scanf("%d", &rows);
    for(i=1; i<=rows; i++) // the  value of i is less then and equal of i for print new lines //
    {
        for(j=i; j<rows; j++) // the value of j is less then rows and it will print space //
        {
            printf(" "); // for print space //
        }
        for(j=1; j<=i; j++) // the value of j is less and equal of i and will print star //
        {
            printf("*"); // for print star //
        }
        printf("\n"); // for print new lines //
    }

    return 0;
}
