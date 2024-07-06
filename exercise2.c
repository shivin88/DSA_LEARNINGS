#include <stdio.h>

void traversal(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void deletion(int arr[], int size, int capacity, int index)
{
    if (size >= capacity)
    {
        printf("not possible");
    }
    else
    {
        for(int i=index;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }

    }
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5};
    int size=5;
    traversal(arr,size);
    printf("\n");
    int capacity = 100, index = 3;
    deletion(arr,size,capacity,index);
    size-=1;
    traversal(arr,size);
    return 0;
}