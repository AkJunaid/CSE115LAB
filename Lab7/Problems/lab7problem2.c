
#include<stdio.h>

int main()
{
    int arr[5],a, temp=0;
    printf("Enter array elements: ");
    for(int i=0; i<5; i++)
        scanf("%d", &arr[i]);

    for(int j=0; j<5; j++)
    {
        if(arr[j]>temp)
            temp=arr[j];
    }
    printf("Largest element: %d", temp);
    return 0;
}
