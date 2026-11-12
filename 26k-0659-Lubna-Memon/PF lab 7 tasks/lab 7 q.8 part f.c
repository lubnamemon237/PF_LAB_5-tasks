#include <stdio.h>

int main()
{
	int i,j;
	char ch;
	
	for(i=1;i<=5;i++)
	{
		for(j=0;j<=5-i;j++)
		{
			printf("  ");
		}
		ch='A';
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
