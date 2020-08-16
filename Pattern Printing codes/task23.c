
#include <stdio.h>

int main()
{
    int i, j, rows; // lets take i as rows and j as column and rows as input //
    printf("Enter rows: "); //input the value rows//
    scanf("%d", &rows);

    for(i=1; i<=rows; i++) // the value of i is less then and equal of rows and will create that numbers of new line //
    {
        for(j=1; j<=rows - i; j++) //the value of j is less then and equal rows-1.Example the value of rows is 5 that means 5-1=4,there will be 4 spaces//
        {
            printf(" "); //the is for print space//
        }
        for(j=1; j<=rows; j++) // the value of j is less then and equal of rows and will print that numbers of stars( * ) //
        {
            printf("*"); //this is for print star//
        }
        printf("\n"); //this is for print new line //
    }

    return 0;
}
