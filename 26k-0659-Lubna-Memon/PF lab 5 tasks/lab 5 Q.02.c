#include <stdio.h>

int main()
{
	int attendance,marks,income;
	
	printf("Enter Marks(0-100): ");
	scanf("%d",&marks);
	
	printf("Enter attendance percentage(0-100): ");
	scanf("%d",&attendance);
	
	printf("Enter family income: ");
	scanf("%d",&income);
	
	if(marks<50){
		printf("Not eligible: marks too low");
	}
	else if(attendance<75){
		printf("Not eligible: attendance too low");
	}
	else if(income>800000){
		printf("Not eligible: income too high");
	}
	else{
		if(marks>=90 && attendance>=90){
			printf("Full Schlarship");
		}
		else if(marks>=75 && attendance>=85){
			printf("Half schlarship");
		}
		else{
			printf("Quarter Schlarship");
		}
	}
	return 0;
}
