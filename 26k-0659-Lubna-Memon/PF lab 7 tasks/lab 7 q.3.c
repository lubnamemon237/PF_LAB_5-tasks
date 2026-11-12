#include <stdio.h>

int main()
{
	int sales[4][5];
	int i,j,total,final,bonus;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
		printf("Enter sales amount(Rs): ");
		scanf("%d",&sales[i][j]);
		}
	}
	
	for(i=0;i<4;i++)
	{
		total=0;
		for(j=0;j<5;j++)
		{
			total=total+sales[i][j];
		}
		printf("\nTotal sales of salesman %d: %d\n",i+1,total);
		if(total>10000)
		{
		bonus=total*0.1;
		final=total+bonus;
		}
		else
		{
		bonus=0;
		final=total;
		}
		printf("\nBonus: %d\n",bonus);
		printf("\nFinal amount: %d\n",final);
	}
	
	
	int productTotal[5];
	for(j=0;j<5;j++)
	{
		total=0;
		for(i=0;i<4;i++)
		{
			total=total+sales[i][j];
		}
		productTotal[j]=total;
		printf("\nTotal sales per product %d:%d\n",j+1,total);
	}

	int max=productTotal[0];
	int expensiveProduct=0;
	for(j=0;j<5;j++)
	{
		if(productTotal[j]>max)
		{
			max=productTotal[j];
			expensiveProduct=j;
		}
	}
	printf("\nMost expensive Product %d: %d",expensiveProduct+1,max);
	
	

}
