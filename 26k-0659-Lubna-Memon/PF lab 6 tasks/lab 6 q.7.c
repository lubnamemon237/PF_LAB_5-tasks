#include <stdio.h>

int main()
{
	int original,reverse=0,digit,number;
	
	printf("Enter the number: ");
	scanf("%d",&number);
	
	original=number;
	
	while(number>0)
	{
		digit=number%10;
		reverse=reverse*10+digit;
		number=number/10;
	}
	
	if(original==reverse)
	{
		printf("Palindrome confirmed");
	}
	else
	{
		printf("Not a palindrome");
	}
}
