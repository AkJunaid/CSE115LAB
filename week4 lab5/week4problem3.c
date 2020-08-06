
#include<stdio.h>
int main()
{
    int N,i,sum = 0;
    printf("Enter a number: ");
    scanf("%d",&N);

    for(i = 1; i<=N;i++){
        sum = sum + i;
    }
    printf("Sum = %d\n",sum);

    return 0;
}
