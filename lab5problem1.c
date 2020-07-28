#include<stdio.h>
int main()
{
    int a,b,c;
    char sign;
    printf("Enter Two Num : ");
    scanf("%d %d",&a,&b);
    printf("Enter operator : ");
    scanf(" %c",&sign);

    switch(sign)
    {
    case '+' :
        printf("%d\n",a+b);
        break;
    case '-' :
        printf("%d\n",a-b);
        break;
    case '*' :
        printf("%d\n",a*b);
        break;
    case '/' :
        printf("%d\n",a/b);
        break;
    default:
        printf("Invalid operator\n");
    }
    return 0;


}
