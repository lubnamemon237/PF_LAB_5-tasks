#include <stdio.h>

int main()
{
	int category,sub_type,delay;
	
	printf("Enter category(1 to 4): ");
	scanf("%d",&category);
	
	printf("Enter sub-type(1 to3): ");
	scanf("%d",&sub_type);
	
	switch(category){
	case 1: printf("1=Greeting \n");
		switch(sub_type){
			case 1: printf("1=Morning \n");
			break;
			case 2: printf("2=Evening \n");
			break;
			default: printf("Invalid sub type \n");
			return 0;
		}
	break;
	case 2: printf("2=Query");
		switch(sub_type){
			case 1: printf("1=Product \n");
			break;
			case 2: printf("2=Billing \n");				
			break;
			case 3: printf("3=Technical \n");
			break;
			default: printf("Invalid sub type");
			return 0;
			}
	break;
	case 3: printf("3=Complaint \n");
		switch(sub_type){
			case 1: printf("1=Delivery \n");
				printf("Order is delayed (1=Yes 0=No): ");
				scanf("%d",&delay);
				if(delay==1){
					printf("Humbly apologize for the delay");
				}
				else{
					printf("Apologize for inconvenience");
				}
			break;
			case 2: printf("2=Quality");
			break;
			default: printf("Invalid sub type");
			return 0;
		}
	break;
	case 4: printf("4=Feedback");
		switch(sub_type){
			case 1: printf("1=Positive \n");
			break;
			case 2: printf("2=Negative \n");
			break;
			default: printf("Invalid sub type");
			return 0;
		}
	break;
	default: printf("INVAlID CATEGORY");}
	return 0;
	}
