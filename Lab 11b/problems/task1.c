
#include <stdio.h>
#include <string.h>
int main()
{
	typedef struct
	{
		char name[50];
        int id;
        char dept[20];
        double cgpa;
	}student;

	student std[15];
	FILE * flp;
	int x = 0, i;
	char s1[100], c;
	char s2[100];
	int n;
	double y;

	flp = fopen("input.txt", "r");
	if(!flp)
	{
		printf("Unable to open file\n");
		return ;
	}

	while((c=getc(flp))!=EOF){
    putchar(c);
	}
	fclose(flp);

    flp = fopen("input.txt", "r");
	while (fscanf(flp,"%[^,],%d,%[^,],%lf",s1, &n, s2, &y) != EOF)
	{

		strcpy(std[x].name,s1);
		std[x].id = n;
		strcpy(std[x].dept,s2);
		std[x].cgpa = y;
		x++;
	}
	printf("\n");
	fclose(flp);
}

