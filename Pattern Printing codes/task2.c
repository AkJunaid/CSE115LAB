
#include <stdio.h>

int main()
{
    int i, j, n; // lets take i as rows and j as column and n as the value of rows //
    printf("Enter value of n : "); // input the value of n //
    scanf("%d", &n);
    for(i=1; i<n; i++) // the value of i is less then n and will print new lines //
    {
        for(j=1; j<=(n-i); j++) // the value of j is less then and equal of (n-i) and will print space //
        {
            printf(" "); // for print space //
        }
        for(j=i; j<=n; j++) // the value of j is less then and equal of n and will print star ( * ) //
        {
            printf("*"); // for print star //
        }

        printf("\n"); // for print new line //
    }
    for(i=1; i<=n; i++) // the value of n is less then and equal of n and will print new line //
    {
        for(j=1; j<i; j++) // the value of j is less then i will print space //
        {
            printf(" "); // for print space //
        }
        for(j=1; j<=i; j++) // the value of j is less then and equal of i and will print star //
        {
            printf("*"); // for print star ( star ) //
        }

        printf("\n"); // for print new line //
    }

    return 0;
}
