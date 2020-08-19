
#include<stdio.h>
int main()
{
    int n,i,sum,t1 = 0,t2 = 1;

    printf("Enter number: ");
    scanf("%d",&n);

    for(i = 1;i<=n;i++)
    {
        printf("%d ",t1);
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
    }
    return 0;
}
