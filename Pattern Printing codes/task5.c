
#include<stdio.h>

int main()
{
    int i, j, N, columns; // take i as row,j as column,N as column and take columns //
    printf("Enter number of columns:"); // take the value of columns as N //
    scanf("%d",&N);

    columns=1; // take the fixed value of columns //

    for(i=1;i<N*2;i++) // the value of i is less then N*2 and it will print new lines//
    {
        for(j=1; j<=columns; j++) // the value of j is less then and equal of columns and it will print star ( * ) //
        {
            printf("*"); // for print star ( * ) //
        }

        if(i < N) // if the value of i is less then N then it will increment columns else it will decrement columns //
        {
            columns++; // for increment columns //
        }
        else
        {
            columns--; // for decrement columns //
        }
        printf("\n"); // for print new lines //
    }

    return 0;
}
