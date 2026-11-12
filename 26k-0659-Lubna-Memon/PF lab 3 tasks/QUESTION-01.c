#include <stdio.h>
int main()
{
	int age;
	char name [50], Department [50], university_name [50];
	
	printf("Enter Your Name ");
	scanf("%s" ,&name);
	printf("Enter Your age ");
	scanf("%d" , &age);
	printf("Enter Your Department  ");
	scanf("%s" ,&Department);
	printf("Enter Your university_name ");
	scanf("%s" ,&university_name);
	
	printf("Your Name is %s\n", name);
	printf("Your age is %d\n", age);
	printf("Your Department is %s\n", Department);
	printf("Your university_name is %s\n", university_name);
}
