#include <stdio.h>

int main()
{
    int i, j, n; // lets take i as rows,j as column and n as the value of rows //
    printf("Enter value of n : "); // input n //
    scanf("%d", &n);
    for(i=1; i<n; i++) // the value of n is less then i and will print new line //
    {
        for(j=1; j<=(2*i-2); j++) // the value of j is less then and equal of (2*i-2) and will print space //
        {
            printf(" "); // for print space //
        }
        for(j=i; j<=n; j++) // the value of j is less then and equal of n and will print star //
        {
            printf("*"); // for print star ( * ) //
        }

        printf("\n"); // for print new lines //
    }
    for(i=1; i<=n; i++) // the value of i is less then and equal of n and will print new lines //
    {
        for(j=1; j<=(2*n - 2*i); j++) // the value of j is less then and equal of (2*n-2*1) and will print space //
        {
            printf(" "); // for print space //
        }
        for(j=1; j<=i; j++) // for print j is less then and equal of i and will print star ( * ) //
        {
            printf("*"); // for print star //
        }

        printf("\n"); // for print new line //
    }

    return 0;
}
