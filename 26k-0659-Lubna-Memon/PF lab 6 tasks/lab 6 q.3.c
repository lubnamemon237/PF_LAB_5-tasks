#include <stdio.h>

int main()
{
	int stock[10],min[10],order,largest=0,total=0;
	
	for(int i=0;i<10;i++)
	{
		printf("enter current stock quantity: ");
		scanf("%d",&stock[i]);
		
		printf("enter minimum required quantity: ");
		scanf("%d",&min[i]);
		
		if(stock[i]<min[i])
		{
			order=min[i]-stock[i];
			
			printf("product %d need %d units \n",i+1,order);
			total=total+order;
			if(order>largest)
			{
			largest=order;
			}
		}	
	}
	printf("largest reorder=%d",largest);
	printf("total reorder quantity=%d",total);
}
