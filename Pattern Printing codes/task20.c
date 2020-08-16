
#include <stdio.h>

int main()
{
    int i, j, N; // lets take i as rows,j as column and N as input //

    printf("Enter number of rows: "); //lets take the value of N //
    scanf("%d", &N);

    for(i=1; i<=N; i++){ // the value of i is less then and equal of N for print new line //
        for(j=1; j<=N; j++) // the value of j is less then and equal of N for print star ( * ) //
        {
            printf("*"); // for print star ( * ) //
        }
        printf("\n"); // for print new lines //
    }

    return 0;
}
