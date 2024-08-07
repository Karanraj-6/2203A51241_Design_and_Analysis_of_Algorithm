/* Imagine you are working for a retail store that sells a wide variety of products. The
store has a vast inventory with thousands of items, and it's becoming challenging for
the employees to manage and locate products efficiently. Customers often ask for
specific items, and employees need to find them quickly. The sorting program's
primary goal is to organize the products in the inventory systematically, allowing for
faster and easier access to items when needed.
Implement an efficient sorting algorithm to arrange the products based on product
IDs. */

#include <stdio.h>

void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=(low - 1);

    for (int j=low; j<=high-1; j++)
    {
        if (arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quicksort(int arr[], int low, int high)
{
    if (low<high)
    {
        int pi = partition(arr, low, high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}

int main()
{
    int arr[] = {87, 67, 21, 59, 99, 46, 84, 32, 43, 12, 90, 23};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("Enter Product IDs: ");
    for (int i = 0; i < n; i++)
    {
        if (i != 0) printf(",");
        printf("%d",arr[i]);
    }
    printf("\n");

    quicksort(arr,0,n-1);

    printf("After Sorting Product IDs:\n");
    for (int i=0; i< n; i++)
    {
        if (i!=0) printf(",");
        printf("%d",arr[i]);
    }
    printf("\n");

    return 0;
}
