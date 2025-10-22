#include<stdio.h>
int main()
{
	int temperature[3];
	int i , min ,max;
	
	printf("Temperature Sensor\n");
	printf("_________________\n");
	
	printf("Enter four readings showing temperature: \n");
	for(i=0;i<4;i++)
	{
		scanf("%d" , &temperature[i]);
	}
	max=min=temperature[0];
	for(i=1;i<4;i++)
	{
		if(temperature[i] > max)
		    max = temperature[i];
		else
		    min =  temperature[i];
	}
	printf("\nHottest Day:  %d\n" , max);
	printf("\nColdest Day:  %d\n" , min);
	
}
