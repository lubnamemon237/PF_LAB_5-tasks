#include <stdio.h>

int main()
{
	float current_total, discounted_total;
	int hour;
	
	printf("Enter current total bill: ");
	scanf("\n %f",&current_total);
	
	printf("Enter hour of a day (0-23): ");
	scanf("\n %d",&hour);
	
	if(hour>=11 && hour<=14)
	{
		printf("Dicounted total=%.2f",discounted_total=current_total-(current_total*0.10));
	}
	else {
		printf("Original bill is %.2f",current_total);
	}
	return 0;
	
	
}
