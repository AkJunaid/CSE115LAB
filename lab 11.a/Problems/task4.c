
#include<stdio.h>
struct MovieStar
{
    char name[20];
    float rating;
    int totalfans;
}moviestars[5];

int main()
{
    int i;
    float ratings;
    char s;
    printf("Movie Star Review\n");

    review:
    printf("\nEnter Movie Star No(0-4): ");
    scanf("%d", &i);
    printf("Enter Name: ");
    scanf("%s", &moviestars[i].name);

    printf("Enter Rating: ");
    scanf("%f", &ratings);
    moviestars[i].rating+=ratings;

    moviestars[i].totalfans++;

    printf("\n Show Results (Y) or  Add another review? (N)");
    scanf(" %c", &s);
    if(s=='Y')
    {
        printf("\n\n Movie Stars Reviews");
        for(int i=0; i<5; i++)
        {
            printf("\n\nName: %s", moviestars[i].name);
            moviestars[i].rating=moviestars[i].rating/moviestars[i].totalfans;
            printf("\n Rating: %.2f", moviestars[i].rating);
            printf("\nTotal Fans: %d\n", moviestars[i].totalfans);
        }
    }
    else
        goto review;

    return 0;
}
