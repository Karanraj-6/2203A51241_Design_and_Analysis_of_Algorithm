
/*Imagine you work for a large logistics company that handles a high volume of
package deliveries on a daily basis. The company's success hinges on ensuring that
packages are delivered to their respective destinations efficiently and on time. To
solve this problem, you create a program that can quickly process and classify
packages based on their destination.*/

#include <stdio.h>

void sort(int a[], int size, int ascending)
{
    int i, j,temp;
    for(i=1; i<size; i++)
    {
        j=i-1;
        temp=a[i];
        if (ascending) {
            while(j>= 0 && temp<a[j])
            {
                a[j + 1] = a[j];
                j = j - 1;
            }
        } else {
            while(j>=0 && temp >a[j])
            {
                a[j+1]=a[j];
                j=j-1;
            }
        }
        a[j+1]=temp;
    }
}

int main()
{
    int i;
    int SIZE=4;
    int a[SIZE];
    int sortOrder;
    printf("\nEnter time to reach destination:\n");
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Enter 1 for ascending order or 0 for descending order: ");
    scanf("%d", &sortOrder);

    sort(a,SIZE,sortOrder);

    printf("Sorted times:\n");
    for(i = 0; i < SIZE;i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
