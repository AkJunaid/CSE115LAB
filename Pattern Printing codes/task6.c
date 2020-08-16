
#include <stdio.h>

int main()
{
    int i, j, N; // take i as rows, j as columns and N as input the value of columns //
    int star, spaces; // take star and spaces //
    printf("Enter number of columns : "); // enter the value of N as columns //
    scanf("%d", &N);


    spaces = N-1; // the value of spaces equal to is N-1 //
    star = 1; // the value of star is 1 //
    for(i=1; i<N*2; i++) // the value of i is less then N*2 and it will print new line //
    {
        for(j=1; j<=spaces; j++) //the value of j is less then equal to spaces and it will print space //
            printf(" "); // for print space //
        for(j=1; j<=star; j++) // the value of j is less then and equal of star which is 1 and will print star ( * ) //
            printf("*"); // for print star //
        printf("\n"); //for create new line //

        if(i < N) // if the value of i is less then N it will increment star and decrement spaces else it will decrement star and increment spaces
        {
            star++; // for increment star //
            spaces--; // for decrement spaces //
        }
        else
        {
            star--; // for decrement star //
            spaces++; // for increment spaces //
        }
    }

    return 0;
}
