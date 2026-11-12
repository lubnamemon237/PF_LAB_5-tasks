#include <stdio.h>

int main()
{
	int transfers[10] = {5000, 50, 12000, 500000, 20, 8000, 25000, 300, 450000, 15000};
	int count=0,sum=0,largest,normalcount=0;
	float avg;
	
	for(int i=0;i<10;i++)
	{
		if(transfers[i]<100)
		{
			printf("Flag transfers (too small) \n",transfers[i]);
			count++;
		}
		if(transfers[i]>200000)
		{
			printf("Flag transfers (too large) \n",transfers[i]);
			count++;
		}
	}
	for(int i=0;i<10;i++)
	{
		if(transfers[i]>100 && transfers[i]<200000)
		{
			printf("Normal transfers \n");
			sum=sum+transfers[i];
			normalcount++;
		}
	}
	avg=(float)sum/normalcount;
	largest=transfers[0];
	for(int i=0;i<10;i++)
	{
		if(transfers[i]>largest)
		{
			largest=transfers[i];
		}
	}
	printf("flag transfers=%d \n",count);
	printf("Avg of normal transfers=%.2f \n",avg);
	printf("Largest amount=%d \n",largest);
}
