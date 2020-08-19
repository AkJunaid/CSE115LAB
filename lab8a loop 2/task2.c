
#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,answer=0,Num1,Num2;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(i=0; i<=a; i++)
    {
        Num1 = a-i;
        Num2= pow(Num1,2);

        if(i%2==0)
            answer = answer + Num2;
        else
            answer = answer - Num2;
    }
    printf("The sum is: %d", answer);
    return 0;
}
