#include<stdio.h>
int computeAverage(int a, int b)
{
    int c = (a + b)/2;
    return c;
}
int main()
{
    int a,b;
    printf("enter two number: ");
    scanf("%d %d", &a,&b);
    int result =computeAverage(a,b);
    printf("Average = %d\n", result);
    return 0;
}

