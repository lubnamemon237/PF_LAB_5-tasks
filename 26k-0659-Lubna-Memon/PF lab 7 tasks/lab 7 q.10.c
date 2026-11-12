#include <stdio.h>

int main()
{
	int class,students,subjects,marks;
	int i,j,k,failed;
	int schoolTotal,classTotal,studentTotal,totalStudents=0;
	float studentAvg,classAvg,schoolAvg;
	
	printf("Enter number of classes in the school: ");
	scanf("%d",&class);
	
	schoolTotal=0;
	
	for(i=1;i<=class;i++)
	{
		classTotal=0;
		
		printf("Enter the number of students in the current class: ");
		scanf("%d",&students);
		
		for(j=1;j<=students;j++)
		{
			studentTotal=0;
			failed=0;
			printf("Enter the number of subjects the student has studied: ");
			scanf("%d",&subjects);
		
			for(k=1;k<=subjects;k++)
			{
				printf("Enter the marks obtained in the current subject: ");
				scanf("%d",&marks);
			
				studentTotal=studentTotal+marks;
			
				if(marks<40)
				{
				failed=1;
				}
			}
		
		studentAvg=(float)studentTotal/subjects;
		classTotal=classTotal+studentTotal;
		schoolTotal=schoolTotal+studentTotal;
		totalStudents++;
		
		printf("Class %d\nStudent %d\nTotal Marks=%d\nAverage=%.2f\nResult= ",i,j,studentTotal,studentAvg);
		
		if(failed==0)
		{
			printf("pass\n");
		}
		else
		{
			printf("fail\n");
		}
	}
	printf("\nClass total:%d\n",classTotal);
	
		if(students>0)
		{
		classAvg=(float)classTotal/students;
		printf("\nClass %d Average=%.2f\n",i,classAvg);	
		}
	}
	
	printf("\nSchool total:%d\n",schoolTotal);
	
	if(totalStudents>0)
	{
		schoolAvg=(float)schoolTotal/totalStudents;
		printf("\nSchool average=%.2f\n",schoolAvg);
	}
	return 0;
}
