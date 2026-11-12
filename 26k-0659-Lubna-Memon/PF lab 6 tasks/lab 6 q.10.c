#include <stdio.h>

int main()
{
	int amount,transactions=0,total=0;
	
	printf("Enter withdrawl amount: ");
	scanf("%d",&amount);
	
	while(amount!=0)
	{
		total=total+amount;
		transactions++;
		
	printf("Enter withdrawl amount: ");
	scanf("%d",&amount);
	}
	printf("Transactions=%d \n",transactions);
	printf("total amount withdrawn: %d \n",total);
	
}
