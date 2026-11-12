#include <stdio.h>

int main()
{
	int status,pin,balance,withdrawl,notes2000,notes500,notes100;
	
	printf("Enter Card status(1=Valid 0=Blocked): ");
	scanf("%d",&status);
	
	printf("Enter PIN correctness(1=correct 0=wrong): ");
	scanf("%d",&pin);
	
	printf("Enter account balance: ");
	scanf("%d",&balance);
	
	printf("Enter withdrawl amount: ");
	scanf("%d",&withdrawl);
	
	if (status==0){
		printf("card blocked. contact bank");
	}
	else if(pin==0){
		printf("Incorrect Pin");
	}
	else if(withdrawl<=0){
		printf("Invalid amount");
	}
	else if(withdrawl>balance){
		printf("Insufficient balance");
	}
	else if(withdrawl>25000){
		printf("daily limit exceeded");
	}
	else if(balance-withdrawl<1000){
		printf("Minimum balance must be maintained");
	}
	else{
		printf("Dispense cash \n");
		printf("New balance: %d",balance=balance-withdrawl);
		printf("Number of 2000 notes is %d \n",notes2000=withdrawl/2000);
		withdrawl=withdrawl%2000;
		printf("Number of 500 notes is %d \n",notes500=withdrawl/500);
		withdrawl=withdrawl%500;
		printf("NUmber of 100 notes is %d \n",notes100=withdrawl/100);
		withdrawl=withdrawl%100;
		printf("Please collect your cash.");
	}
	return 0;
}
