#include <stdio.h>

int main()
{
	int pizzas;
	int crust;
	
	printf("Enter the number of pizzas: ");
	scanf("\n %d",&pizzas);
	
	printf("Crust Type (1,2,3): 1)for regular 2)for thin 3) for stuffed: ");
	scanf(" \n %d",&crust);
	
	switch(crust)
	{
	case 1: printf("Pizzas is Regular \n");
	break;
	case 2: printf("Pizza is Thin\n");
	break;
	case 3: printf("Pizza is Stuffed\n");
	break;
	default: printf("Invalid choice\n");
	break;
	}
	if(pizzas==3 && crust==3)
	{
		printf("You get free garlic bread \n");}
		else{
			printf("thank you for your order \n");
		}
		
		
}
	
	
	
	
	
	
	

