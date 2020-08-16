
#include <stdio.h>

int main()
{
    int i, j, rows; // take i as rows, j as column and rows for take input //
    int stars, spaces; // take stars and spaces //

    printf("Enter rows to print : "); // input the value of rows //
    scanf("%d", &rows);


    stars = 1; // take the fixed value of stars which is 1 //
    spaces = rows - 1; // take the fixed value of spaces which is rows-1;
    for(i=1; i<rows*2; i++) // the value of i is less then rows*2 and will print new line //
    {
        for(j=1; j<=spaces; j++) // the value of j is less then and equal to spaces and will print space //
            printf(" "); // for print space //
        for(j=1; j<stars*2; j++) // the value of j is less then starts*2 and will print star ( * ) //
            printf("*"); //for print star //
        printf("\n"); // for print new line //

        if(i<rows) // if the value of i is less then rows and it will decrement spaces and increment stars else it will increment spaces and decrement stars //
        {
            spaces--; // for print decrement spaces //
            stars++; // for print increment stars //
        }
        else
        {
            spaces++; // for print increment spaces //
            stars--; // for print decrement stars //
        }
    }

    return 0;
}
