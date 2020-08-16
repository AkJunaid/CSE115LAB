
#include <stdio.h>

int main()
{
    int i, j, N; // take i as rows,take j as columns and N as to take the input the value of rows //
    printf("Enter number of rows: "); // enter the value of rows //
    scanf("%d", &N);
    for(i=1; i<=N; i++) // the value of i is less then and equal to N and will print new lines //
        for(j=1; j<=N; j++) // the value of j is less then equal to N and will print star ( * ) and space //
        {
            /*
* Prints star for, first row (i==1) or last row (i==N) or first column (j==1) or last column (j==N) or row equal to column (i==j) or column equal to N-row (j==N-i+1)
             */
            if(i==1 || i==N || j==1 || j==N || i==j || j==(N - i + 1)) // if the value of i is equal to 1 or i is equal to N or j is equal to 1 or j is equal to N or i is equal to j or j is equal to (N-i+1) then it will print star else i will print space //
            {
                printf("*"); // for print star ( * ) //
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
