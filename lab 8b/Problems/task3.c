#include<stdio.h>
#include<math.h>

double getArea(int a, int b, int h)
{
    float ans = 0.5 * (a+b) * h;
    return ans;
}
int main()
{
    int a,b,h;
     printf("Enter the value of a , b & h: ");
    scanf("%d %d %d", &a, &b, &h);
    float area = getArea(a,b,h);
    printf("\nArea of the trapezium is: %.2f\n", area);
    return 0;
}
