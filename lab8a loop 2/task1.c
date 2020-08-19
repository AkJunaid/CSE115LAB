
#include<stdio.h>
int main()
{
    int i,n,age[100],count=0;

    printf("Number of persons: ");
    scanf("%d",&n);

    i=1;
    while (i<=n)
    {
        printf("Age of %d persons: ",i);
        scanf("%d",&age[i]);
        i++;
    }

    i=0;
    while (i<=n)
    {
        i++;
        if(age[i]>40 && age[i] <60)
        count++;
        else
        continue;

    }

    printf("\nThere are %d numbers of people whose age is between 40-60years old\n",count);

    return 0;
}
