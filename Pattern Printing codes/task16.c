
#include <stdio.h>

int main()
{
    int i, j, rows; // take i as rows,j as column and rows for input as rows //
    printf("Enter number of rows : "); // input rows //
    scanf("%d", &rows);
    for(i=1; i<=rows; i++) // the value of i is less then and equal of i and will print new lines //
    {
        for(j=i; j<=rows; j++) // the value of j is less then and equal of rows for print star ( * ) //
        {
            printf("*"); // for print star ( * ) //
        }
        printf("\n"); // for print new lines //
    }

    return 0;
}
