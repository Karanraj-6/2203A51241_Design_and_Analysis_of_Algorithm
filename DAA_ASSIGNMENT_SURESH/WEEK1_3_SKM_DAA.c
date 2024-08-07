/*Imagine you're working for a large online marketplace company that facilitates the
buying and selling of various products. As part of the order processing system, the
company receives thousands of new orders every minute from customers all around
the world. To ensure efficient and timely order fulfillment, the orders need to be
sorted based on various criteria before they can be processed and shipped.
 Some customers may request advanced shipping or have urgent requirements.
So, implement an application to arrange the Orders based on priority Number
*/

#include <stdio.h>

void selectionSort(int arr[],int n) {
    int i,j,min_idx;
    for (i = 0; i<n-1; i++) {
        min_idx=i;
        for (j =i+1; j<n; j++) {
            if (arr[j]<arr[min_idx]) {
                min_idx=j;
            }
        }
        if (min_idx!=i) {
            int temp=arr[i];
            arr[i]=arr[min_idx];
            arr[min_idx]=temp;
        }
    }
}
int main() {
    int SIZE=12;
    int arr[SIZE],i;
    printf("Enter orders priority number: ");
    for (i = 0; i <SIZE; i++) {
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,SIZE);
    printf("After sorting orders priority: ");
    for (i = 0; i < SIZE; i++) {
    printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}