#include <stdio.h>

void displayRooms()
{
	printf("============================\n");
	printf("AGA KHAN HOSPITAL\n");
	printf("1.General ward: RS.1500/day\n2.Semi-Private: RS.3500/day\n3.Private: RS.6000/day\n");
	printf("============================\n");
}

int getRoomType()
{
	int type;
	printf("Enter room type(1 to 3): ");
	scanf("%d",&type);
	return type;
}

int getNumberDays()
{
	int days;
	printf("Enter number of days patient stayed(1 to 30): ");
	scanf("%d",&days);
	return days;
}

int RoomCharges(int type, int days)
{
	int amount=0;
	switch(type)
	{
		case 1: amount=1500;
		break;
		case 2: amount=3500;
		break;
		case 3: amount=6000;
		break;
		default: printf("Invalid room type\n");
	}
		amount=amount*days;
		return amount;
}

float calMedi()
{
	float bill;
	printf("Enter medicine bill: ");
	scanf("%f",&bill);
	float serviceCharge=bill*(5.0/100);
	float newBill=bill+serviceCharge;
	return newBill;
	
}

float discount(int amount, float newBill, int days)
{
	float discount=0,subTotal;
	subTotal=amount+newBill;
	if(days>=7)
	{
		discount=subTotal*(8.0/100);
	}
	else
	{
		discount=0;
	}
	float finalAmount=subTotal-discount;
	return finalAmount;
}

float seniorDiscount(float finalAmount)
{
	char ch;
	printf("Is the patient a senior citizen? (y/n): ");
	scanf(" %c",&ch);
	
	if(ch=='y' || ch=='Y')
	{
		finalAmount = finalAmount - 1000;
	}
	if(finalAmount<0)
	{
		finalAmount=0;
	}
	return finalAmount;
}

void printBill(int type, int days, int amount, float newBill, float finalAmount)
{
    switch(type)
    {
        case 1:
            printf("Room Name: General Ward\n");
            break;

        case 2: printf("Room Name: Semi-Private\n");
        break;

        case 3: printf("Room Name: Private\n");
        break;
    }
    printf("Number of days: %d\n", days);
	printf("Room charges: Rs. %d\n", amount);
	printf("Medicine charges: Rs. %.2f\n", newBill);
	printf("Final amount: Rs. %.2f\n", finalAmount);
}
int main()
{
	displayRooms();
	
	int type=getRoomType();
	printf("Room type=%d\n",type);
	if(type<1 || type>3)
    {
    printf("Invalid room type!");
    return 0;
    }
	
	int days=getNumberDays();
	printf("patient stayed:%d\n",days);
	if(days<1 || days>30)
    {
    printf("Invalid number of days!");
    return 0;
    }
	
	int amount=RoomCharges(type,days);
	printf("Room charges:%d\n",amount);
	
	float newBill=calMedi();
	printf("Medicine Bill=%.2f\n",newBill);
	
	float finalAmount=discount(amount,newBill,days);
	printf("Final amount after applying discount=%.2f\n",finalAmount);
	
	finalAmount = seniorDiscount(finalAmount);
	printf("Final bill after senior discount=%.2f\n",finalAmount);
	
	printBill(type, days, amount, newBill, finalAmount);
	
}
