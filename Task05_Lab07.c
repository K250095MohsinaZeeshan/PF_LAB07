#include <stdio.h>

int main() 
{
    int sensor1[100], sensor2[100], mergedSensor[200];
    int n1, n2, i, j;
    printf("HOURLY SENSORS\n");
    printf("______________\n");
    printf("\nEnter number of readings from Sensor 1 (Hourly): ");
    scanf("%d", &n1);
    printf("Enter %d readings:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &sensor1[i]);
    }

    printf("\nEnter number of readings from Sensor 2 (Hourly): ");
    scanf("%d", &n2);
    printf("Enter %d readings:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &sensor2[i]);
    }

    for(i = 0; i < n1; i++) 
	{
        mergedSensor[i] = sensor1[i];
    }

    for(j = 0; j < n2; j++) 
	{
        mergedSensor[i + j] = sensor2[j];
    }

    printf("\nMerged array of readings from both sensors:\n");
    for(i = 0; i < n1 + n2; i++) 
	{
        printf("%d ", mergedSensor[i]);
    }
    printf("\n");

    return 0;
}

