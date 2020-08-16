
#include <stdio.h>

int main()
{
    int i, j, rows; //take i as rows, j as columns and take rows for input//
    printf("Enter number of rows: "); // enter the value of rows //
    scanf("%d", &rows);
    for(i=1; i<=rows; i++) // the value of i is less then and equal of rows and will print new lines //
    {
        for(j=i; j<=rows; j++) // the value of j is less then and equal of rows and will print star or space //
        {
            if(i==1 || j==i || j==rows) // if i is equal to 1 or j is equal to 1 and j is equal to rows then it will print star else it will print space  //
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
