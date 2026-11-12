#include <stdio.h>

int main()
{
	int seats[15]={1,0,0,1,0,0,1,0,0,1,0,0,1,0,0};
	int booked=0,empty=0;
	int first=-1,last=-1;
	int bookedseats=0;
	
	for(int i=0;i<15;i++)
	{
		if(seats[i]==1)
		{
			booked++;
		}
		else
		{
			empty++;
		}	
	}
	for(int i=0;i<15;i++)
	{
		if(seats[i]==0)
		{
		first=i;
		break;
		}
	}
	for(int i=0;i<15;i++)
	{
		if(seats[i]==0)
		{
			last=i;
		}
	}
	for(int i=0;i<15;i++)
	{
		if(seats[i]==0)
		{
			seats[i]=1;
			bookedseats++;
		}
		if(bookedseats==3)
		{
			break;
		}
	}	
	printf("Booked=%d \n",booked);
	printf("Empty=%d \n",empty);
	if(first!=-1)
	{
		printf("First available seat is %d \n",first+1);
	}
	if(last!=-1)
	{
	printf("last available seat is %d \n",last+1);
	}
	printf("Seating chart: \n");
	for(int i=0;i<15;i++)
	{
	printf("%d",seats[i]);	
	}
}
