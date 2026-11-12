#include <stdio.h>

int main()
{
	int number_of_pizzas;
	int total_bill;
	
	printf("Enter the number of pizzas the customer wants:");
	scanf("%d",&number_of_pizzas);
	
	if(number_of_pizzas>1){
		printf("promotional reminder on the screen: Check our multi-pizza deals.");
	}
	else{
		printf("Your total bill is %d",total_bill=number_of_pizzas*8);
	}
	
}
