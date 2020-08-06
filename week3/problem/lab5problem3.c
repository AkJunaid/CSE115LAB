
#include<stdio.h>
int main()
{
    int num,year;
    printf("Enter Month Number: ");
    scanf("%d",&num);

    switch(num)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Number of days= 31\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Number of days= 30\n");
        break;
    case 2:
        printf("Enter year: ");
        scanf("%d",&year);

        if(year%400 == 0){
    printf("Number of days= 29\n");
    }
    else if(year%100 == 0){
     printf("Number of days= 28\n");
    }
    else if(year%4 == 0){
     printf("Number of days= 29\n");
    }
    else{
     printf("Number of days= 28\n");
    }

        break;
    default:
        printf("Invalid year number\n");
    }
    return 0;
}


