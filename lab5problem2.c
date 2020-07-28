#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);

 if(year%400 == 0){
    printf("%d is a Leap year\n",year);
 }
 else if(year%100 == 0){
     printf("%d is not a Leap year\n",year);
 }
 else if(year%4 == 0){
     printf("%d is a Leap year\n",year);
 }
 else{
     printf("%d is not a Leap year",year);
 }

    return 0;
}
