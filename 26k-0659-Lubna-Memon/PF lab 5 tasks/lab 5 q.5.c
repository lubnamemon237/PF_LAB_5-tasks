#include <stdio.h>

int main()
{
	int time,motion,light,room,cooking;
	
	printf("Enter time(0-23): ");
	scanf("%d",&time);
	
	printf("Select motion detection(1=Yes 0=No): ");
	scanf("%d",&motion);
	
	printf("Enter light level (0-100): ");
	scanf("%d",&light);
	
	printf("select room: \n");
	printf("1=Living room \n");
	printf("2=bedroom \n");
	printf("3=kitchen \n");
	scanf("%d",&room);
	
	if(room==1)
	{ 
		if (motion==0)
		{
			printf("Away mode: All off");
		}
		else if(time>6 && time<18 && motion==1)
		{
			printf("Day mode: lights ON");
		}
		else if(time>18 && time<23 && motion==1)
		{
			printf("Evening mode: Dim lights");
		}
		else
		{
			printf("Night mode: lights OFF");
		}
	}
	else if(room==2)
	{
		if (motion==0)
		{
			printf("Away mode: All off");
		}
		else if(time>6 && time<18 && motion==1)
		{
			printf("Day mode: lights ON");
		}
		else if(time>18 && time<23 && motion==1)
		{
			printf("Evening mode: Dim lights");
		}
		else
		{
			printf("Night mode: lights OFF");
		}	
	}
	else if(room==3)
	{
		if (motion==0)
		{
			printf("Away mode: All off");
		}
		else if(time>6 && time<18 && motion==1)
		{
			printf("Day mode: lights ON");
		}
		else if(time>18 && time<23 && motion==1)
		{
			printf("Evening mode: Dim lights");
		}
		else
		{
			printf("Night mode: lights OFF");
		}
		printf("Select cooking(1=yes 0=No): ");
		scanf("%d",&cooking);
		
		if(cooking==1)
		{
			printf("Exhaust fan on");
		}
	}
	else
	{
		printf("Invalid room");
	}
	
	
	return 0;
}
