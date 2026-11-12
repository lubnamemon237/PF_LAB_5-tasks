#include <stdio.h>

int main()
{
	int system[10][4]={0};
	int n,i,j,count=0,row,seat;
	int fullRows=0;
	
	printf("Enter how many seats do you want to reserve:\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		while(1)
		{
			printf("Enter row number: ");
			scanf("%d",&row);
			
			printf("Enter seat number: ");
			scanf("%d",&seat);
			
			if(row<1 || row>10 || seat<1 || seat>4)
			{
				printf("Invalid seating selection\n");
			}
			else if(system[row-1][seat-1]==1)
			{
				printf("seat already booked\n");
			}
			else
			{
				system[row-1][seat-1]=1;
				count++;
				break;
			}
		}
	}
	printf("\nSeating Arrangement:\n");
	
	for(i=0;i<10;i++)
	{	printf("Row %d: ",i+1);
		for(j=0;j<4;j++)
		{
			printf("%d ",system[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<10;i++)
	{	int full=1;
		for(j=0;j<4;j++)
		{
			if(system[i][j]==0)
			{
				full=0;
			}
		}
		if(full==1)
		{
			fullRows++;
		}
	}
	printf("Total successful bookings: %d\n",count);
	printf("Total fully booked rows: %d\n",fullRows);
	
}

