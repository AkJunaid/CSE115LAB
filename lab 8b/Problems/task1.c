#include<stdio.h>
#include<math.h>
void findArea(int radius)
{
    float area = 4 * 3.1416 * radius * radius ;
    printf("Area:%.2f",area);
}

void findVolume(int radius)
{
    float volume = (4.0/3) * 3.1416 * radius * radius* radius;
     printf("\nVolume: %.2f\n", volume);
}

int main()
{
    int radius ;
     printf("enter radius: ");
    scanf("%d", &radius);
    findArea(radius) ;
    findVolume(radius);
    return 0;
}


