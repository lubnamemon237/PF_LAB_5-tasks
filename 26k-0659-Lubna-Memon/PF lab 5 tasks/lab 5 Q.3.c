#include <stdio.h>

int main()
{
	int age,oxygen_level,heart_rate;
	
	printf("Enter Age: ");
	scanf("%d",&age);
	
	printf("Enter Oxygen level(SPO__%%): ");
	scanf("%d",&oxygen_level);
	
	printf("Enter heart rate(bpm): ");
	scanf("%d",&heart_rate);
	
	if(oxygen_level<90){
		printf("Critical: immediate attention");
	}
	else if(heart_rate>130 || heart_rate<40){
		printf("Critical: cardiac alert");
	}
	else{
		if(age>=65 && oxygen_level<95){
			printf("High Priority");
		}
		else if(age<=5 && heart_rate>110){
			printf("High priority");
		}
		else if(oxygen_level<97){
			printf("Meduim priority");
		}
		else{
			printf("Low priority");
		}
}
		return 0;
	}
	
