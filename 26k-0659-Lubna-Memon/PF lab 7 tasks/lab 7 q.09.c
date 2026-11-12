#include <stdio.h>

int main()
{
	int depart,employee;
	int days;
	int i,j,k;
	int salary,bonus,depTotal=0,grandTotal=0;
	
	printf("Enter the number of departments: \n");
	scanf("%d",&depart);
	
	for(i=1;i<=depart;i++)
	{
		depTotal=0;
		printf("Enter the number of employees in current department: \n");
		scanf("%d",&employee);
		
		for(j=1;j<=employee;j++)
		{
			printf("Enter the number of days worked by the current employee: \n");
			scanf("%d",&days);
			
			salary=days*500;
			bonus=0;
			if(days>25)
			{
				bonus=2000;
			}
			salary=salary+bonus;
			depTotal=depTotal+salary;
			
			printf("Department %d\nEmployee %d\nDays Worked=%d\nSalary=RS.%d\n",i,j,days,salary);
		}
			printf("\n");
			printf("total salary to all employee in department %d: %d\n",i,depTotal);
			grandTotal=grandTotal+depTotal;
	}
	printf("Total salary across all department:%d\n",grandTotal);
}
