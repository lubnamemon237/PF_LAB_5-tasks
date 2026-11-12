#include <stdio.h>

void displayRoutes()
{
	printf("=========================\n");
	printf("SHALIMAR BUS\n");
	printf("=========================\n");
	printf("1:Karachi to Hyd:Rs.800\n2:Karachi to Sukkur:Rs.2200\n3:Karachi to Multan:Rs.3500\n");
}

int routeNum()
{
	int route;
	do
	{
	printf("Enter Route Number(1 to 3): ");
	scanf("%d",&route);
	
	if(route<1 || route>3)
	{
		printf("Invalid route number.Try again\n");
	}
	}while(route<1 || route>3);
	
	return route;
}

int seatNum()
{
	int seat;
	do
	{
	printf("Enter number of seats(1 to 6): ");
	scanf("%d",&seat);
	if(seat<1 || seat>6)
	{
		printf("Invalid number of seats.Try again\n");
	}
	}while(seat<1 || seat>6);
	return seat;
}

int getFare(int route)
{
	int fare=0;
	switch(route)
	{
		case 1: fare=800;
		break;
		case 2: fare=2200;
		break;
		case 3: fare=3500;
		break;
		default: printf("Invalid choice\n");
	}
	return fare;
}

int totalFare(int fare, int seat)
{
	int TotalFare=fare*seat;
	return TotalFare;
}

char seatCharge()
{
	char type;
	printf("Enter seat type :Economy or Business(E or B): ");
	scanf(" %c",&type);
	return type;
}

int calNewTotal(int TotalFare, char type)
{
	int newTotal;
	if(type=='E' || type=='e')
	{
		newTotal=TotalFare;
	}
	else if(type=='B' || type=='b')
	{
		int bonus=TotalFare*(30.0/100);
		newTotal=TotalFare+bonus;
	}
	return newTotal;
}

void displayRouteName(int route)
{
    switch(route)
    {
        case 1:
            printf("Selected Route: Karachi to Hyd\n");
            break;

        case 2:
            printf("Selected Route: Karachi to Sukkur\n");
            break;

        case 3:
            printf("Selected Route: Karachi to Multan\n");
            break;
    }
}

void printTicket(int route,int seat, char type, int newTotal)
{
	printf("========\n");
	printf("Ticket\n");
	printf("========\n");
	displayRouteName(route);
	printf("Number of seats:%d\n",seat);
	printf("Seat type:%c\n",type);
	printf("Final fare:%d\n",newTotal);
	
}
int main()
{
	displayRoutes();
	
	int earnings=0;
	for(int i=1;i<=2;i++)
	{
			int route=routeNum();
	
	int seat=seatNum();

	
	int fare=getFare(route);

	
	int TotalFare=totalFare(fare,seat);
	
	char type=seatCharge();

	
	int newTotal=calNewTotal(TotalFare,type);
	
	printTicket(route,seat,type,newTotal);
	
	earnings=earnings+newTotal;
		
	}
	printf("=======================\n");
	printf("Total earnings:%d\n",earnings);
	printf("=======================");
	

	return 0;
}
