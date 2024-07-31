#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int maximum(int A[],int n)
{
    int max;
    for (int i=0;i<n;i++)
    {
        if(max<A[i])
        {
            max=A[i];
        }
    }
}

void countSort(int A[],int n)
{
    int max=maximum(A,n);
    int * count=(int *) malloc ((max+1)*sizeof(int));
    for(int i=0;i<n;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count [A[i]]=count[A[i]]+1;
    }
    int i=0;
    int j=0;
    while(i<=max)                                              
    {
        if(count[i]>0)
        {
            A[j]=i;
            count[i]=count[i]-1;
            j++;
        }
    }
}
int main()
{
    // int A[] = {9, 14, 4, 8, 7, 5, 6};
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = 7;
    printArray(A, n);
    countSort(A, 6);
    printArray(A, n);
    return 0;
}
