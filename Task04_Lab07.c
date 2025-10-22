#include <stdio.h>

int main() 
{
    int arr[100], n, i;
    int startPoint = 0, endPoint, temp;
    printf("ARRAY REVERSAL\n");
    printf("______________\n");
    printf("\nEnter the number of elements you want in the array: ");
    scanf("%d", &n);
    endPoint = n - 1;

    printf("\nEnter %d elements:\n", n);
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    while(startPoint < endPoint) 
	{
  
        temp = arr[startPoint];
        arr[startPoint] = arr[endPoint];
        arr[endPoint] = temp;

        startPoint++;
        endPoint--;
    }

    printf("\nReversed array will be:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

