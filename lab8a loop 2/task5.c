
#include<stdio.h>
int main()
{
    int i,j,k,n;

    printf("enter n: ");
    scanf("%d",&n);

    for(i = 1; i<=n; i++)
    {
        //space
        for(j = 1; j<= n-i; j++)
        {
            printf(" ");
        }
        //star
        for(k = 1; k<= 2*i-1;k++)
        {
            printf("*");
        }
        //new line
        printf("\n");
    }
    return 0;
}
