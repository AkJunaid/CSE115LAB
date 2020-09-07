#include <stdio.h>
int main()
{
    int row,col,i,j;
    printf("Enter the number of rows : ");
    scanf("%d", &row);
    printf("Enter the number of columns : ");
    scanf("%d", &col);
    int matrix[row][col];
    int transpose[row][col];

    printf("\nEnter matrix elements:\n");
    for(i=0; i<row; i++)
        for (j=0; j<col; j++)
        {
            printf("Enter element [%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }




    for(i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }


    printf("\nTranspose of the matrix:\n");
    for(i=0; i<col; i++)
    {
        for (j=0; j<row; j++)
        {
            printf("\t%d",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}

