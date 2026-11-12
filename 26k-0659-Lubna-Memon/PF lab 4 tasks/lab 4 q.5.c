#include <stdio.h>
 int main()
 {
 	char cheese;
 	float updated_total, current_total;
 	
 	printf("enter current total: ");
 	scanf("\n %f",&current_total);
 	
 	printf("do u want extra cheese Y/N? ");
 	scanf("\n %c",&cheese);
 	
 	switch(cheese)
	{
 	case 'Y':
 	case 'y':
 		printf("updated total=%.2f",updated_total=1.50+current_total);
 	break;
 	
 	case 'N':
 	case 'n':
 		printf("updated total=%.2f",updated_total=current_total);
 	break;
 	default:
 		printf("Invalid choice kindly enter Y/N");
 		break;
	}
 		
 }
