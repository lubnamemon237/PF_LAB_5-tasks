#include <stdio.h>

int main()
{
	int size;
	printf("Select the size: ");
	scanf("\n %d",&size);
	
	switch(size)
	{
		case 01: printf("Small");
		break;
		case 02: printf("Meduim");
		break;
		case 03: printf("large");
		break;
		default:
			printf("Error warning: invalid size");
		
		 }
	 
		
	}

