#include <stdio.h>

void displayRules()
{
	printf("========================\n");
	printf("TAXI FARE SYSTEM\n");
	printf("========================\n");
	printf("Base fare:Rs.150\nFirst 10km:Rs.60/km\nAfter 10km:Rs.45/km\n");
	printf("First 5 mints waiting:free\nAfter 5 mints waiting:Rs.10/mint\nNight charge:25%%\n");
}

int getDistance()
{
	int distance;
	do
	{
		printf("Enter distance(1 to 200): ");
		scanf("%d",&distance);
	
		if(distance<1 || distance>200)
		{
			printf("Invalid distance\n");
		}
	}while(distance<1 || distance>200);
	return distance;
}

int getWaitingTime()
{
	int mints;
	do
	{
		printf("Enter waiting time in mints(0 to 120): ");
		scanf("%d",&mints);
		
		if(mints<0 || mints>120)
		{
			printf("Invalid time\n");
		}
	}while(mints<0 || mints>120);
	return mints;
}

int distanceCharges(int distance)
{
	int charges;
	if(distance<=10)
	{
		charges=distance*60;
	}
	else
	{
		charges=(10*60)+(distance-10)*45;
	}
	return charges;
}

int waitingCharge(int mints)
{
	int charge;
	if(mints<=5)
	{
		charge=0;
	}
	else
	{
		charge=(5*0)+(mints-5)*10;
	}
	return charge;
}

int nightCharge(int fare)
{
	int hours;
	
		do
		{
		printf("Enter hour for the trip(0-23): ");
		scanf("%d",&hours);
		if(hours<0 || hours>23)
		{
			printf("Invalid hours\n");
		}
		}while(hours<0|| hours>23);
		
		if(hours>=22|| hours<6)
		{
	 	fare=fare+fare*(25.0/100);
		}
	return fare;
}

void printReceipt(int distance, int mints, int newFare)
{
	printf("==================\n");
	printf("TRIP RECIPT\n");
	printf("==================\n");
	printf("\nDistance=%d\n",distance);
	printf("Mints=%d\n",mints);
	printf("Final fare=%d\n",newFare);
}
int main()
{
	int earnings=0,highestFare=0;
	displayRules();
	
	for(int i=1;i<=3;i++)
	{
	int distance=getDistance();
	int mints=getWaitingTime();
	int charges=distanceCharges(distance);
	int charge=waitingCharge(mints);
	int totalFare=150+charges+charge;
	int newFare=nightCharge(totalFare);
	printReceipt(distance,mints,newFare);
	earnings=earnings+newFare;
	if(newFare>highestFare)
	{
		highestFare=newFare;
	}
	}
	printf("=======================\n");
	printf("Total earnings: Rs.%d\n",earnings);
	printf("Highest fare=%d\n",highestFare);
	printf("=======================\n");
	return 0;
}
