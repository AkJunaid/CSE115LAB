#include<stdio.h>
int main()
{
    int row1,col1,row2,col2,i,j,k,sum;
    printf("Enter the number of rows of 1st matrix: ");
    scanf("%d",&row1);
    printf("Enter the number of columns of 1st matrix: ");
    scanf("%d",&col1);
    printf("\nEnter the number of rows of 2nd matrix: ");
    scanf("%d",&row2);
    printf("Enter the number of columns of 2nd matrix: ");
    scanf("%d",&col2);
    int x[row1][col1], y[row2][col2],multi[row1][col2];
    if(col1!=row2)
    {
        printf("\nINVALID DIMENTION!\n");
        return 0;
    }
    else
    {
        printf("\nEnter elements of 1st matrix:\n");
        for(i=0; i<row1; i++)
        {
            for(j=0; j<col1; j++)
            {
                printf("Enter element matA[%d][%d]: ", i + 1, j + 1);
                scanf("%d",&x[i][j]);
            }
        }
        printf("\nEnter elements of 2nd matrix:\n");
        for(i=0; i<row2; i++)
        {
            for(j=0; j<col2; j++)
            {
                printf("Enter element y[%d][%d]: ", i + 1, j + 1);
                scanf("%d", &y[i][j]);
            }
        }
        for(i=0; i<row1; i++)
        {
            for(j=0; j<col2; j++)
            {
                sum=0;
                for(k=0; k<col1; k++)
                {
                    sum+=x[i][k]*y[k][j];
                    multi[i][j]=sum;
                }
            }
        }
        printf("\nMultiplication of the two matrices: \n");
        for(i=0; i<row1; i++)
        {
            for(j=0; j<col2; j++)
            {
                printf("%5d ", multi[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
