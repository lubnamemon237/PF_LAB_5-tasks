#include <stdio.h>

int main()
{
	int option;
	float bill,total;
	printf("Enter the option 1/2: ");
	scanf("%d",&option);
	switch(option){
		case 1: printf("1) Pickup \n");
		break;
		case 2: printf("2) Dilevery \n");
		break;
		default:
			printf("Invalid option \n");
			return 0;
	}
	printf("Enter bill amount: ");
	scanf("%f",&bill);
	
	if(option==2){
		printf("Total bill=%.2f \n",total=bill+3.00);}
		else{
			printf("total bill=%.2f \n",total=bill);
		}
		
	}
