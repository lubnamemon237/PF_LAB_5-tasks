#include <stdio.h>

int main()
{
	int box[3][3];
	int i,j,valid=1,a,b;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			printf("Enter the numbersin cell which you want to add in grid: ");
			scanf("%d",&box[i][j]);
		}
		
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(box[i][j]<0 || box[i][j]>9)
			{
				valid=0;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(a=0;a<3;a++)
			{
				for(b=0;b<3;b++)
				{
					if((i!=a || j!=b)&&(box[i][j]==box[a][b])&&(box[i][j]!=0))
					{
						valid=0;
					}
				}
			}
		}
	}
	if(valid==1)
	{
	printf("Valid grid\n");
	}
	else
	{
	printf("Invalid grid\n");
	}
}
