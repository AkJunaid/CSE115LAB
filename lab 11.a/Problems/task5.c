
#include <stdio.h>

struct BarcelonaPlayer
{
char name[20];
int age;
char country[20];
char Position[20];
double Salary;
double Rating;
};
int n;
findMaxPayment(struct BarcelonaPlayer p[])
{
    int i, max = p[0].Salary;
    for(i = 0; i<n; i++){
        if(max< p[i].Salary){
            max = p[i].Salary;
        }
    }
    printf("Max: %d", max);
}

int main()
{
    struct BarcelonaPlayer no_of_players[10];
    int i;
    printf("No of players: ");
    scanf("%d", &n);
    for(i =0; i<n; i++){

        printf("Player: %d\n", i+1);
        printf("Name: ");
        scanf("%s", no_of_players[i].name);
        printf("Age: ");
        scanf("%d", &no_of_players[i].age);
        printf("Country: ");
        scanf("%s", no_of_players[i].country);

        printf("Position: ");
        scanf("%s", no_of_players[i].Position);
        printf("Salary: ");
        scanf("%lf", &no_of_players[i].Salary);
        printf("Rating: ");
        scanf("%lf", &no_of_players[i].Rating);
    }
    findMaxPayment(no_of_players);
}
