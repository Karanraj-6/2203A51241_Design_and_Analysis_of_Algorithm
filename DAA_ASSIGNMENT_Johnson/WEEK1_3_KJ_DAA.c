/* Imagine you're working for a large online marketplace company that facilitates the
buying and selling of various products. As part of the order processing system, the
company receives thousands of new orders every minute from customers all around
the world. To ensure efficient and timely order fulfillment, the orders need to be
sorted based on various criteria before they can be processed and shipped.
Some customers may request advanced shipping or have urgent requirements.
So, implement an application to arrange the Orders based on priority Number. */

#include <stdio.h>

void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[], int low, int high)
{
    int pivot=arr[high];
    int i=(low-1);

    for (int j=low; j<=high-1; j++)
    {
        if (arr[j]<pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quicksort(int arr[],int low, int high)
{
    if (low<high)
    {
        int pi = partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}

int main()
{
    int arr1[]={87, 67, 21, 59, 99, 46, 84, 32, 43, 12, 90, 23};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[]={44, 66, 37, 90, 81, 43, 55, 19, 98, 33, 72, 51};
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    printf("Enter orders Priority Number:\n");
    for (int i=0;i<n1;i++)
    {
        if (i!= 0) printf(",");
        printf("%d",arr1[i]);
    }
    printf("\n");
    quicksort(arr1,0,n1-1);
    printf("After Sorting Orders Priority:\n");
    for (int i= 0;i<n1;i++)
    {
        if (i != 0) printf(",");
        printf("%d", arr1[i]);
    }
    printf("\n");

    printf("Enter orders Priority Number:\n");
    for (int i = 0; i < n2; i++)
    {
        if (i != 0) printf(",");
        printf("%d", arr2[i]);
    }
    printf("\n");
    quicksort(arr2,0,n2-1);
    printf("After Sorting Orders Priority:\n");
    for (int i=0; i< n2; i++)
    {
        if (i != 0) printf(",");
        printf("%d", arr2[i]);
    }
    printf("\n");

    return 0;
}
