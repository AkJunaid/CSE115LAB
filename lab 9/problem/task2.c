
#include<stdio.h>
#include<stdlib.h>

int max(int *p, int size);

int main()
{
    int n, *d,i,s;
    printf("Enter size: ");
    scanf("%d",&n);
    printf("\nEnter elements:\n");

    d=(int *)calloc(n, sizeof(int));
    if(d==NULL)
    {
        exit(0);
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",d+i);
    }

    s=max(d,n);
    printf("\nLargest element is: %d",s);
    printf("\n");

    return 0;
}

int max(int *p, int size)
{
    int m=0,i;
    for(i=1; i<size; i++)
    {
        if(*p<*(p+i))
        {
            *p=*(p+i);
        }
    }
    m=*p;
    return m;
}
