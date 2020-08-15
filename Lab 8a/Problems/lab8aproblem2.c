
#include<stdio.h>

int main()
{
    int row, column, search, sum=0;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &column);
    int arr[row][column];
    printf("Enter elements: ");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter which column to find sum of: ");
    scanf("%d", &search);
    search--;
    for(int i=0; i<row; i++)
        sum=sum+arr[i][search];
    printf("Sum of column %d: %d",search+1, sum);

    return 0;
}
