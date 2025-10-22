#include<stdio.h>
int main()
{
	float power[24];
	float total = 0.0 , average;
	int i;
	printf("Energy meter\n");
	printf("____________\n");
	printf("\nEnter power-usage(in watts) for each 24 hrs: \n");
	for(i=0;i<24;i++)
	{
		printf("Hour %d: " , i , i+1);
		scanf("%f" , &power[i]);
	}
	for(i=0;i<24;i++)
	  total+= power[i];
	  
	  average = total/24;
	  
	  printf("\n Total power for the day: %.2f watts\n" , total);
	  printf("\n Average power usage by the hour: %.2f watts\n" , average);
	  
	  return 0;
}
