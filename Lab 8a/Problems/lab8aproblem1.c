
#include<stdio.h>

int countSearchKey(int arr[], int size, int key);
int main()
{
    int array_size, key,result,search;
    printf("Enter array Size: ");
    scanf("%d", &array_size);
    printf("Array Elements: ");
    int ele[array_size];
    for(int i=0; i<array_size; i++)
         scanf("%d", &ele[i]);
    printf("Search Key: ");
    scanf("%d", &search);
    result = countSearchKey(ele,array_size,search);
    printf("Search Key appears %d times",result);
    return 0;
}

int countSearchKey(int arr[], int size, int key)
{
    int count=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
            count++;\
    }
    return count;
}
