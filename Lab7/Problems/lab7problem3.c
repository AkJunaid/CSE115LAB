
#include<stdio.h>

void search(int arr[], int size, int key);
int main()
{
    int array_size, key,result,find;
    printf("Enter array size: ");
    scanf("%d", &array_size);
    printf("Array Elements: ");
    int ele[array_size];
    for(int i=0; i<array_size; i++)
        scanf("%d", &ele[i]);
    printf("Search Key: ");
    scanf("%d", &find);
    search(ele, array_size, find);
    return 0;
}

void search(int arr[], int size, int key)
{
    int ans=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
            ans=1;

    }
    if(ans==1)
        printf("Found");
    else
        printf("Not found");

}
