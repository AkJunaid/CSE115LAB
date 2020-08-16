
#include <stdio.h>

int main()
{
    int i, j, N; // take i as rows,take j as columns and N as to take the input the value of rows //
    printf("Enter number of rows: "); // enter the value of rows //
    scanf("%d", &N);
    for(i=1; i<=N; i++) // the value of i is less then and equal to N and will print new lines //
    {
        for(j=1; j<=N; j++) // the value of j is less then and equal to N will print star and space //
        {
            if(i==1 || i==N || j==1 || j==N) // if the value of i is equal to 1 or i is equal to N or j is equal to 1 or j is equal to N then it will print star ( * ) else it will print space //
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
