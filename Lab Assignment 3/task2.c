#include <stdio.h>

int main()
{
    printf("Enter the size of the array: ");
    int input;
    scanf("%d",&input);
    int original_arr[input];
    printf("\nEnter array elements: \n");
    int i;
    for(i=0; i<input; i++)
        scanf("%d",&original_arr[i]);
    int reverse_arr[input];

    for(i=input-1; i>=0; i--)
        reverse_arr[input-i-1]=original_arr[i];
    printf("\nArray in normal order: \n");
    for(i=0; i<input; i++)
        printf("%d ",original_arr[i]);
    printf("\n");

    printf("\nArray in reverse order: \n");
    for(i=0; i<input; i++)
        printf("%d ",reverse_arr[i]);

        printf("\n");

    return 0;
}
