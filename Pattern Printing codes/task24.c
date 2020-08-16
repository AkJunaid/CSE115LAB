
#include <stdio.h>

int main()
{
    int i, j, n; // lets take i as row, j as column and n as input //
    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) // the value of i is less then and equal of n.it will create that number of rows  //
    {
        for(j=1; j<=i; j++) // the value of j is less then and equal of n.it means j will print that number of star as column //
        {
            printf("*"); // for print star //
        }
        printf("\n"); // for print new line //
    }

    return 0;
}
