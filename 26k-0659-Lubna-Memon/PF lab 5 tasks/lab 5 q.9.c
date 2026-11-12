#include <stdio.h>

int main()
{
	int permissions;
	
	printf("Enter permissions: ");
	scanf("%d",&permissions);
	
	if(permissions & 16)
	{
		printf("Full access: Admin \n");
	}
	else if((permissions & 2 )&& (permissions & 8))
	{
		printf("Access: delete and write \n");
	}
	else if(!(permissions & 2) && (permissions & 4))
	{
		printf("Access: Execute-only \n");
	}
	else if(!(permissions & 4) && !(permissions & 2) && (permissions & 1))
	{
		printf("Access: read-only \n");
	}
	else if(!(permissions & 1) && !(permissions & 2) && !(permissions & 4) && !(permissions & 8) && !(permissions & 16))
	{
		printf("Access denied \n");
	}
	else {
		printf("Custom permissions \n");
	}
	printf("Detected permissions \n");
	if (permissions & 1)
	{
		printf("Read detected \n");
	}
	if (permissions & 2)
	{
		printf("Write detected \n");
	}
	if (permissions & 4)
	{
		printf("Execute detected \n");
	}
	if (permissions & 8)
	{
		printf("Delete detected \n");
	}
	if (permissions & 16)
	{
		printf("Admin detected \n");
	}
}
