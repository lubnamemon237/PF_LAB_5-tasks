#include <stdio.h>

int main()
{
	int marks[12],sum=0,count100=0,highest,lowest,range;
	float avg;
	
	for(int i=0;i<12;i++)
	{
		printf("Enter student marks(out of 100): ");
		scanf("%d",&marks[i]);
		
		if(marks[i]+5>100)
		{
			marks[i]=100;
		}
		else
		{
			marks[i]=marks[i]+5;
		}
			sum=sum+marks[i];
		if(marks[i]==100)
		{
			count100++;
		}
	}
	highest=marks[0];
	lowest=marks[0];
	for(int i=0;i<12;i++)
	{
		if(marks[i]>highest)
		{
			highest=marks[i];
		}
		if(marks[i]<lowest)
		{
			lowest=marks[i];
		}
	}
	avg=(float)sum/12;
	range=highest-lowest;
	printf("\navg=%.2f \n",avg);
	printf("\nRange =%d\n",range);
	printf("\nstudents who got 100 marks count=%d \n",count100);

	
}
