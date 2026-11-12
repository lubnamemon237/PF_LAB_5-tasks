#include <stdio.h>

int main()
{
	int distance;
	
	printf("Enter distance in kg: ");
	scanf("%d",&distance);
	
	printf("Distance in kg=%d \n",distance);
	printf("Distance in meters=%d \n",distance*1000);
	printf("Distance in centimeters=%d \n",distance*10000);
	
	return 0;
	
}
