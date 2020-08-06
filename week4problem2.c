
#include<stdio.h>
int main()
{
    int n,i,fact = 1;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(n >= 0){
        for(i = 1;i<=n;i++){
            fact = i*fact;
        }
        printf("Factorial of %d is %d\n",n,fact);
    }
    else{
        printf("Error! Factorial of a negative number doesn't exist.\n");
    }
    return 0;
}
