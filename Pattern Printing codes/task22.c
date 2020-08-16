
#include <stdio.h>

int main()
{
    int i, j, rows; // lets take i as rows,j as column and rows as input //
    printf("Enter number of rows : "); //input rows //
    scanf("%d", &rows);

    for(i=1; i<=rows; i++) // the value of i is less then and equal of rows and will create that numbers of new lines//
    {
        for(j=1; j<i; j++) // the value of j is less then i and will print that numbers of space //
        {
            printf(" "); // for print space //
        }
        for(j=1; j<=(rows*2 -(2*i-1)); j++) // the value of j is less then and equal of (rows*2-2(2*i-1))//
        //Example the value of i is 1 and the value of rows is 2 then the equation will be (2*2-(2*1-1)) 1 star in first line //
        {
            printf("*"); // for print star //
        }
        printf("\n"); // for print new line //
    }

    return 0;
}
