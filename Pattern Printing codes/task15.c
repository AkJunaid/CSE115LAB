
#include <stdio.h>

int main()
{
    int i, j, N; // take i as rows, j as column and N as input //
    printf("Enter rows: "); // enter N as rows //
    scanf("%d", &N);


    for(i=1; i<=N; i++) // the value of i is less then and equal of N and will print new lines //
    {
        for(j=1; j<i; j++) // the value of j is less then and equal of i for print space  //
        {
            printf(" "); // for print space //
        }

        for(j=1; j<=N; j++) // the value of j is less then and equal of N //
        {
            printf("*"); // for print star ( * ) //
        }

        printf("\n");  // for print new line //
    }

    return 0;
}
