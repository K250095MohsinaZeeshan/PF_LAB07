#include <stdio.h>

int main() {
	
    int arr[100], n, i, j, value;
    printf("\nSENSOR DATA CLEANUP\n");
    printf("___________________\n");
    printf("\nEnter the number of elements you want in the array: ");
    scanf("%d", &n);

    printf("\nEnter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the value you want to delete: ");
    scanf("%d", &value);

    for(i = 0; i < n; i++) 
	{
        if(arr[i] == value) 
		{

            for(j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;   
            i--;    
        }
    }
    printf("\nUpdated elements in the array:\n");
    for(i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }

    printf("\nNew size of the array: %d\n", n);

    return 0;
}

