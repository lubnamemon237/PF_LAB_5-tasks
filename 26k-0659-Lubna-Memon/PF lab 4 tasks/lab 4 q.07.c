#include <stdio.h>

int main()
{
	float bill_total;
	char student;
	
	printf("Enter total bill: ");
	scanf(" \n %f",&bill_total);
	
	printf("Do you have a student Id (Y/N)? ");
	scanf("\n %c",&student);
	
	if(student=='Y' || student=='y')
	{ 
	bill_total=bill_total-2.00;	
	}
	if(bill_total<0)
	{
		bill_total=0.00;
		
	}
	printf("Total bill is %.2f",bill_total);
	return 0;
}
