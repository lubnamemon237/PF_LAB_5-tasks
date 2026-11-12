#include <stdio.h>

int main()
{
	int quantity;
	int total_package;
	
	printf("Enter customer's desired pizza quantity (1,2,3): ");
	scanf("\n %d",&quantity);
	
	switch(quantity)
	{
	case 1: 
			total_package=8;
	break;
	case 2: 
			total_package=15;
	break;
	
	case 3: 
			total_package=21;
	break;
	default:
		printf("Invalid quantity");
	}
	printf("Quantity: %d \n",quantity );
	printf("total package: %d \n",total_package);
	
}
