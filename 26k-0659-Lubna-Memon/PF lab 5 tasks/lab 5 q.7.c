#include <stdio.h>

int main()
{
	int stream,medicine,interest;
	
	printf("Enter Students stream(1 to 3): ");
	scanf("%d",&stream);
	
	printf("Enter students interest(1 to 3): ");
	scanf("%d",&interest);
	
	switch(stream){
		case 1: printf("1=Science \n");
			switch(interest){
				case 1: printf("1=Biology \n");
					printf("Enter student interested in medicine(1=yes 0=no): ");
					scanf("%d",&medicine);
					if(interest==1){
						printf("MBBS \n");
					}
					else{
						printf("BIO TECHNOLOGY \n");
					}
				break;
				case 2: printf("2=Physics \n");
				break;
				case 3: printf("3=Chemistry \n");
				break;
				default: printf("Invalid interest choice \n");
				return 0;
			}
		break;
		case 2: printf("2=Commerce \n");
			switch(interest){
				case 1: printf("1=Accounting \n");
				break;
				case 2: printf("2=Marketing \n");
				break;
				default: printf("Invalid interest choice \n");
				return 0;
			}
		break;
		case 3: printf("Arts");
			switch(interest){
				case 1: printf("1=Literature \n");
				break;
				case 2: printf("2=History \n");
				break;
				case 3: printf("3=Psycology \n");
				break;
				default: printf("Invalid interest choice \n");
				return 0;
			}
		break;
		default: printf("Invalid stream choice");
		return 0;
	}
}
