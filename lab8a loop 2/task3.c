
#include<stdio.h>
int main()
{
    int n;
    printf("Input: ");
    scanf("%d",&n);

    printf("\n\nOutput: \n");
    for(int row=1;row<=n;row++){
        if(row%2!=0){
            for(int col=1;col<=row;col++){
                if(col%2!=0){
                     printf("%d ",col);
                }
            }
            printf("\n");
        }
        else if(row%2==0){
            for(int col=1;col<=row;col++){
                if(col%2==0){
                     printf("%d ",col);
                }
            }
            printf("\n");
        }
    }
}
