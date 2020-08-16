
#include <stdio.h>

int main()
{
    int i, j, rows; // lets take i as rows,j as column and rows as input //
    printf("Enter number of rows : "); // enter the value of rows //
    scanf("%d", &rows);
    for(i=1; i<=rows; i++) // the value of  i is less then and equal of rows //
    {
        for(j=i; j<rows; j++) // the value of j is less then rows and will print that numbers of space //
        {
            printf(" "); // for print space //
        }
        for(j=1; j<=(2*i-1); j++) // the vale of j is less then and equal of (2*1-1) example the value of i is 2 then the equation will be 3 and will 3 stars //
        {
            printf("*"); // for print star //
        }
        printf("\n"); // for print new lines //
    }

    return 0;
}
