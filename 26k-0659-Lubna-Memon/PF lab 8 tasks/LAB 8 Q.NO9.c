#include <stdio.h>
#include <string.h>

void readMarks(int *m1, int *m2, int *m3)
{
	printf("Enter 3 subjects marks(0 to 100): ");
	scanf("%d %d %d",m1,m2,m3);
	
	while(*m1<0 || *m1>100 || *m2<0 || *m2>100 || *m3<0 || *m3>100)
	{
		printf("Invalid marks.Enter marks between 0 to 100");
		scanf("%d %d %d",m1,m2,m3);
	}
}

void calcStats(int m1, int m2, int m3, int *total, double *avg, int *highest, int *lowest)
{
	*total=m1+m2+m3;
	*avg=*total/3.0;
	*highest=m1;
	if(m2>*highest)
	{
		*highest=m2;
	}
	if(m3>*highest)
	{
		*highest=m3;
	}
	
	*lowest=m1;
	if(m2<*lowest)
	{
		*lowest=m2;
	}
	if(m3<*lowest)
	{
		*lowest=m3;
	}
}

void swapMarks(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void addGraceMarks(int *mark, int grace)
{
	if(grace>5)
	{
		grace=5;
	}
	if(*mark>35 && *mark<39)
	{
		*mark=*mark+grace;
	}
	if(*mark<35)
	{
		*mark=*mark;
	}
}

void findGrade(double avg, char *grade, char remarks[])
{
	if(avg>=80)
	{
		*grade='A';
		strcpy(remarks,"Excellent");
	}
	else if(avg>=60)
	{
		*grade='B';
		strcpy(remarks,"Good");
	}
	else
	{
		*grade='C';
		strcpy(remarks,"Needs improvement");
	}
}

void incrementByValue(int x)
{
	x++;
}

void incrementByRef(int *x)
{
	(*x)++;
}
int main()
{
	for(int i=1;i<=5;i++)
	{
		printf("\nStudent %d:\n",i);
		int m1,m2,m3;
		readMarks(&m1,&m2,&m3);
		
		int grace;
		printf("Enter grace marks(0 to 5): ");
		scanf("%d",&grace);
		addGraceMarks(&m1,grace);
		addGraceMarks(&m2,grace);
		addGraceMarks(&m3,grace);
		if(m1<m2)
		{
			swapMarks(&m1,&m2);
		}
		if(m1<m3)
		{
			swapMarks(&m1,&m3);
		}
		if(m2<m3)
		{
			swapMarks(&m2,&m3);
		}
	
		int total,highest,lowest;
		double avg;
	
		calcStats(m1,m2,m3,&total,&avg,&highest,&lowest);
	
		char grade,remarks[20];
		findGrade(avg,&grade,remarks);
		
		printf("\nTotal mark:%d\n",total);
		printf("Average:%.2lf\n",avg);
		printf("Lowest:%d\n",lowest);
		printf("Highest:%d\n",highest);
		printf("Grade:%c\n",grade);
		printf("Remarks:%s\n",remarks);
	}
	int num=10;
	printf("\nOriginal:%d\n",num);
	incrementByValue(num);
	printf("After pass value:%d\n",num);
	
	incrementByRef(&num);
	printf("After pass refernce:%d\n",num);
	
	//pass by value changes only the copy
	//pass by reference changes the original variable

	
	return 0;
}
