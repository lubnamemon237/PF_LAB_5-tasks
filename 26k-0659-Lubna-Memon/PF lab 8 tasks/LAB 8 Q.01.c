#include <stdio.h>

void displaypacks()
{
	printf("Mobile recharge:\n");
	printf("1:Rs.100\n");
	printf("2:Rs.200\n");
	printf("3:Rs.500\n");
	printf("4:Rs.1000\n");
}

int pack()
{
	int pack;
	printf("Enter pack number(1 to 4): ");
	scanf("%d",&pack);
	return pack;
}

long long mobileNum()
{
	long long mobile;
	printf("Enter mobile number: ");
	scanf("%11lld",&mobile);
	return mobile;
}

int getAmount(int choice)
{
	int amount=0;
	switch(choice)
	{
		case 1: amount=100;
		break;
		case 2: amount=200;
		break;
		case 3: amount=500;
		break;
		case 4: amount=1000;
		break;
	default: printf("Invalid choice\n");	
	}
	return amount;
}

float calculateTax(int amount)
{
	float tax;
	tax=amount*(15.0/100);
	return tax;
}

float calculateBonus(int amount)
{
	float bonus;
	if(amount>=500)
	{
		bonus=amount*(10.0/100);
	}
	else
	{
		bonus=0;
	}
	return bonus;
}

void printSlip(long long mobile, int amount, float tax, float totalBalance)
{
		printf("===========================\n");
		printf("Recharge Slip:\n");
		printf("Mobile number:%11lld\n",mobile);
		printf("Pack amount from the pack number:%d\n",amount);
		printf("Tax amount=%.2f\n",tax);
		printf("total balance:%.2f\n",totalBalance);
		printf("============================\n");
}

int main()
{
	float totalSpent=0;
	for(int i=1;i<=3;i++)
	{
		displaypacks();
		int choice = pack();
		printf("Selected pack number:%d\n",choice);
			int amount=getAmount(choice);
		if(amount==0)
		{
    		continue;
		}

		long long mobile;
		mobile=mobileNum();
		printf("Mobile number:%11lld\n",mobile);
	
		printf("Pack amount from the pack number:%d\n",amount);
	
		float tax=calculateTax(amount);
		float finalAmount=amount+tax;
		printf("After adding 15%% tax the final amount =%.2f\n",finalAmount);
	
		float bonus=calculateBonus(amount);
		printf("Bonus=%.2f\n",bonus);
		float totalBalance=amount+bonus;
		printf("Total balance:%.2f\n",totalBalance);
		
		totalSpent = totalSpent + finalAmount;
	
		printSlip(mobile,amount,tax,totalBalance);
	}
	printf("\nTotal money spent = Rs. %.2f", totalSpent);

	
	return 0;
}
