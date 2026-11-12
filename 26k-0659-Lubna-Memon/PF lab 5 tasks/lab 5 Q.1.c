#include <stdio.h>

int main()
{
	int type,status,hours;
	float fee;
	
	printf("Enter vehicle type(1=Bike 2=Car 3=Truck): ");
	scanf("%d",&type);
	
	printf("Enter hours parked: ");
	scanf("%d",&hours);
	
	printf("Enter membership status (1=member 2=non-member): ");
	scanf("%d",&status);
	
	if(type!=1 && type!=2 && type!=3)
	{
		printf("Invalid Vehicle Type");
	}
	else if(hours<=0)
	{
		printf("Invalid duration");
	}
	else
	{
		if(type==1)
		{
			fee=20*hours;
		}
		else if(type==2){
			if (hours<=2)
			{
				fee=50;
			}
			else
			{
				fee=50+30*(hours-2);
			}
	}
		else if(type==3)
		{
				if(hours<=3)
				{
				fee=100;
				}
				else
				{
					fee=100+50*(hours-3);
				}
		}
	if (status==1 && fee>200)
	{
		fee=fee-(fee*0.15);
	}
	printf("Final fee: %.2f",fee);
	}
}
