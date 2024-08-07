/*Imagine you are working for a retail store that sells a wide variety of products. The
store has a vast inventory with thousands of items, and it's becoming challenging for
the employees to manage and locate products efficiently. Customers often ask for
specific items, and employees need to find them quickly. The sorting program's
primary goal is to organize the products in the inventory systematically, allowing for
faster and easier access to items when needed.
Implement an efficient sorting algorithm to arrange the products based on product
IDs.*/

#include <stdio.h>
void insertionSort(int arr[], int n) {
    int i, j,key;
    for (i=1; i<n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

int main() {
    int SIZE = 12;
	int arr[SIZE],i;
    for (i =0; i<SIZE; i++) {
        scanf("%d",&arr[i]);
    }
    insertionSort(arr, SIZE);
    for (i = 0; i<SIZE; i++) {
        printf("%d, ",arr[i]);
    }
    printf("\n");

    return 0;
}
