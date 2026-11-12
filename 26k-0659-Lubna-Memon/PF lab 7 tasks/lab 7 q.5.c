#include <stdio.h>

int main()
{
	int marks[2][3][3];
	int i,j,k,total;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("Enter marks: ");
				scanf("%d",&marks[i][j][k]);
			}
		}
	}
	int totalMarks[6];
	int index=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			total=0;
			for(k=0;k<3;k++)
			{
				total=total+marks[i][j][k];	
			}
			totalMarks[index]=total;
			printf("Class %d Student %d: %d marks\n",i+1,j+1,total);
			index++;
		}
	}
	int highest,topper;
	highest=totalMarks[0];
	topper=0;
	for(j=1;j<3;j++)
	{
		if(totalMarks[j]>highest)
		{
			highest=totalMarks[j];
			topper=j;
		}
	}
	printf("Top Performer of Class 1: Student %d with %d marks\n", topper+1, highest);
	
	highest=totalMarks[3];
	topper=3;
	for(j=4;j<6;j++)
	{
		if(totalMarks[j]>highest)
		{
			highest=totalMarks[j];
			topper=j;
		}
	}
	printf("Top performer of class 2: student %d wth %d marks\n",topper-2,highest);
	
	highest=totalMarks[0];
	topper=0;
	for(index=1;index<6;index++)
	{
		if(totalMarks[index]>highest)
		{
			highest=totalMarks[index];
			topper=index;
		}
	}
	if(topper<3)
	{
		printf("Overall top performer:Class 1 student %d with %d marks",topper+1,highest);
	}  
	else
	{
		printf("Overall top performer: class 2 student %d with %d marks",topper-2,highest);
	 } 
	
	
	
	

}
