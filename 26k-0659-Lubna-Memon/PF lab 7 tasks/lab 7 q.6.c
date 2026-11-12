#include <stdio.h>

int main()
{
	int data[3][3];
	int key[3][3];
	int i,j;
	int encrypted[3][3];
	int max,maxRow,maxCol;
	

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the data: ");
			scanf("%d",&data[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the key value: ");
			scanf("%d",&key[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			encrypted[i][j]=(data[i][j]*key[i][j]+(i+j));
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",encrypted[i][j]);
		}
		printf("\n");
	}
	
	max=encrypted[0][0];
	maxRow=0;
	maxCol=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(encrypted[i][j]>max)
			{
				max=encrypted[i][j];
				maxRow=i;
				maxCol=j;
			}
		}
	}
	
	printf("Maximum Encrypted: %d\n",max);
	printf("Row: %d\n",maxRow);
	printf("Column: %d\n",maxCol);
	
}
