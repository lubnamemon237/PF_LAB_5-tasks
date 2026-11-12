#include <stdio.h>

int main()
{
	int a,b;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	
	printf("Before swapping:%d \n",a);
	printf("Before swapping:%d \n",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping:%d \n",a);
	printf("After swapping:%d \n",b);
	
	return 0;
}
