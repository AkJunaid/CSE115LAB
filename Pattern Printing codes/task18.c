
#include <stdio.h>

int main()
{
    int i, j, rows; // take i as rows, j as columns and rows to take input //
    printf("Enter number of rows : "); // input the value of rows //
    scanf("%d", &rows);
    for(i=1; i<=rows; i++) // the value of i is less then equal to rows and will print new lines //
    {
        for(j=i; j<rows; j++) // the value of j is less then rows and will print space //
        {
            printf(" "); // for print space //
        }
        for(j=1; j<=i; j++) // the value of j is less then and equal to i and will print star and space  //
        {
            if(i==rows || j==1 || j==i) // if the value of i is equal to rows or j is equal to 1 and j is equal to i then it will print star else it will print space //
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
