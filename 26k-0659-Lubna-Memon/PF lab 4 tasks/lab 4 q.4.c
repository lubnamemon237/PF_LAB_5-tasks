#include <stdio.h>

int main()
{
	int total;
	int crust_type;
	
	printf("Enter current total cost: ");
	scanf("\n %d",&total);
	
	printf("Enter crust type 1) Regular 2) Thin 3) Stuffed: ");
	scanf("\n %d",&crust_type);
	
	switch(crust_type)
	{
		case 1: 
				total=total+0;
		break;
		case 2:
				total=total+1;
		break;
		case 3:
				total=total+2;
		break;	
		default:
				printf("invalid crust");
		break;
	}
	printf("Updated Bill total=%d",total);
	
	
}
