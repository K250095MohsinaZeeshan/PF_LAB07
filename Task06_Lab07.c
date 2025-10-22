#include <stdio.h>

void rotatePlacetoRight(int arr[], int size) 
{
    
    int last = arr[size - 1]; 
    int i;

    for (i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last; 
}

void printArray(int arr[], int size) 
{
    int i;
    for (i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int size, i;
    printf("ARRAY ROTATION\n");
    printf("______________\n");
    
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) 
	{
        printf("\nInvalid array size.\n");
        return 1;
    }

    int arr[size];


    printf("\nEnter %d elements:\n", size);
    for (i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("\nThe entered array elements:\n");
    printArray(arr, size);

    rotatePlacetoRight(arr, size);

    printf("\nArray after rotating one position to the right:\n");
    printArray(arr, size);

    return 0;
}

