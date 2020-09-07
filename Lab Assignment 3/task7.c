#include<stdio.h>
int main()
{
    int row, col, i, j;
    printf("Enter the number of rows : ");
    scanf("%d", &row);
    printf("Enter the number of columns : ");
    scanf("%d", &col);

    int x[row][col], y[row][col], add[row][col];

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
        {
            printf("Enter element x[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &x[i][j]);
        }

    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
        {
            printf("Enter element x[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &y[i][j]);
        }

    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
        {
            add[i][j] = x[i][j] * y[i][j];
        }

    printf("\nAddition of the two matrices: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%5d ", add[i][j]);

            printf("\n");
    }

    return 0;
}
