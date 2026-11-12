#include <stdio.h>

int findMax(int *p, int n)
{
	int max=*p;
	for(int i=1;i<n;i++)
	{
		if(p[i]>max)
		{
			max=p[i];
		}
	}
	return max;
}

int findMin(int *p, int n)
{
	int min=*p;
	for(int i=1;i<n;i++)
	{
		if(p[i]<min)
		{
			min=p[i];
		}
	}
	return min;
}

double findAvg(int *p,int n)
{
	double avg;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+p[i];
	}
	avg=(float)sum/n;
	return avg;
}

int countAbove(int *p, int n, double avg)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(p[i]>avg)
		{
			count++;
		}
	}
	return count;
}

void reverseArray(int *p,int n)
{
	int *start=p;
	int *end=p+n-1;
	
	while(start<end)
	{
		int temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
	printf("\nArray after reversing:\n");
	for(int i=0; i<n; i++)
	{
    printf("%d ",p[i]);
	}
}

int searchMark(int *p, int n, int key)
{
	for(int i=0;i<n;i++)
	{
		if(p[i]==key)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int marks[10];
	for(int i=0;i<10;i++)
	{
		printf("Enter student %d marks(0-100): ",i+1);
		scanf("%d",&marks[i]);
		
		while(marks[i]<0 || marks[i]>100)
		{
			printf("Invalid marks.Enter marks between 0 to 100\n");
			scanf("%d",&marks[i]);
		}
	}
	
	printf("Array before reversing:\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ",marks[i]);
	}
	
	reverseArray(marks,10);
	
	int highest=findMax(marks,10);
	int lowest=findMin(marks,10);
	double avg=findAvg(marks,10);
	int key;
	printf("\nEnter marks to search: ");
	scanf("%d",&key);

	int position=searchMark(marks,10,key);

	if(position==-1)
	{
    printf("Mark not found\n");
	}
	else
	{
    printf("Mark found at index: %d\n",position);
	}
	int count=countAbove(marks,10,avg);
	
	printf("Highest:%d\n",highest);
	printf("Lowest:%d\n",lowest);
	printf("Average marks:%.2lf\n",avg);
	printf("Students above average:%d\n",count);
	
	int pass=0;
	for(int i=0;i<10;i++)
	{
		if(marks[i]>=40)
		{
			pass++;
		}
	}
	printf("Total students passed:%d\n",pass);
}
