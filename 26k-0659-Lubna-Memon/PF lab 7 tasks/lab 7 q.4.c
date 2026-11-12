#include <stdio.h>

int main()
{
	int temp[3][3][3];
	int x,y,z;
	float sum,avg;
	int layer;
	int maxTemp,maxX,maxY,maxZ;
	
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			for(z=0;z<3;z++)
			{
				printf("Enter the temp in celsius: ");
				scanf("%d",&temp[x][y][z]);
			}
		}
	}
	float layerAvg[3];
	float maxAvg;
	int hottestLayer;
	for(z=0;z<3;z++)
	{
		sum=0;
		for(x=0;x<3;x++)
		{
			for(y=0;y<3;y++)
			{
				sum=sum+temp[x][y][z];
			}
		}
		avg=sum/9;
		layerAvg[z]=avg;
		printf("Average of Layer %d: %.2f\n",z+1,avg);
	}
	maxAvg=layerAvg[0];
	hottestLayer=0;
	
	for(z=0;z<3;z++)
	{
		if(layerAvg[z]>maxAvg)
		{
			maxAvg=layerAvg[z];
			hottestLayer=z;
		}
	}
	printf("Hottest layer: %d\n",hottestLayer+1);
	printf("Maximum Average: %.2f\n",maxAvg);
	
	maxTemp=temp[0][0][0];
	maxX=0;
	maxY=0;
	maxZ=0;
	
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			for(z=0;z<3;z++)
			{
				if(temp[x][y][z]>maxTemp)
				{
					maxTemp=temp[x][y][z];
					maxX=x;	
					maxY=y;
					maxZ=z;			
				}
			}
		}
	}
	
	printf("Maximum Temp: %d\n",maxTemp);
	printf("Coordinates:(%d,%d,%d)\n",maxX,maxY,maxZ);
	
}
