#include <stdio.h>

int main()
{
	int data_set,role,status;
	float accuracy,confidence,model_score,data_score;
	
	printf("Enter accuracy (0-100): ");
	scanf("%f",&accuracy);
	
	printf("Enter Confidence score (0-100): ");
	scanf("%f",&confidence);
	
	printf("enter data set size (number of samples): ");
	scanf("%d",&data_set);
	
	printf("Enter role: \n");
	printf("1=Intern \n");
	printf("2=Engineer \n");
	printf("3=Admin \n");
	scanf("%d",&model_score);
	
	printf("Enter status flags(bitwise): ");
	printf("1=trained \n");
	printf("2=validated \n");
	printf("4=Approved \n");
	printf("8=Deprecated \n");
	scanf("%d",&status);
	
	if(data_set/1000.0 < 10){
		data_score=data_set/1000.0;
	}
	else {
		data_score=10;
	}
	
	model_score=(accuracy*0.5)+(confidence*0.3)+((data_set/1000 ,10)*2);
	printf("Model score is %.2f \n",model_score);
	
	if(status & 8){
		printf("Rejected: model deprecated \n");
	}
	else if(!(status & 1))
	{
	printf("Rejected: Not trained \n");		
	}	
	else if (!(status & 2)){
		printf("Rejected: Not validated \n");
	}
	else if (!(status & 4)){
		printf("Pending: awaiting approval \n");
	}
	else if(accuracy<70 || confidence <60){
		printf("Rejected: performance too low \n");
	}
	else if(data_set<5000){
		printf("Rejected: dataset too small \n");
	}
	else if(role==1){
		printf("denied:interns cannot deploy \n");
	}
	else if(role==2 && model_score<80){
		printf("Denied: Engineer needs higher score \n");	
	}
	else {
		printf("Approved for deployment \n");
	}
	printf("Variables: \n");
	printf("Accuracy: %zu bytes \n",sizeof(accuracy));
	printf("Confidence: %zu bytes \n",sizeof(confidence));
	printf("data set size: %zu bytes \n",sizeof(data_set));
	printf("Role:%zu bytes \n",sizeof(role));
	printf("Status:%zu bytes \n",sizeof(status));
	printf("Model score: %zu bytes \n",sizeof(model_score));
	
	if (model_score > (accuracy + confidence) / 2) {
		printf("Model score is above the average of accuracy and confidence.\n"); 
	} 
	else {
		 printf("Model score is not above the average of accuracy and confidence.\n");
	}	
	
}
