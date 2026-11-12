#include <stdio.h>

int main()
{
	double costPrice,sellPrice,quantity;
	double *ptrCost=&costPrice;
	double *ptrSell=&sellPrice;
	double *ptrQuantity=&quantity;
	
	printf("Enter cost price: ");
	scanf("%lf",ptrCost);
	
	printf("Enter selling price: ");
	scanf("%lf",ptrSell);
	
	printf("Enter Quantity: ");
	scanf("%lf",ptrQuantity);
	
	double totalCost,totalSales,profitLoss;
	double *ptrtotalCost=&totalCost;
	double *ptrtotalSales=&totalSales;
	double *ptrProfitLoss=&profitLoss;
	
	*ptrtotalCost=*ptrCost* *ptrQuantity;
	*ptrtotalSales=*ptrSell* *ptrQuantity;
	*ptrProfitLoss=*ptrtotalSales-*ptrtotalCost;
	
	if(*ptrtotalSales>*ptrtotalCost)
	{
		printf("Profit\n");
	}
	else if(*ptrtotalSales<*ptrtotalCost)
	{
		printf("Loss\n");
	}
	else 
	{
		printf("No profit no loss!\n");
	}
	
	double profitPercentage;
	double *ptrProfitPercentage=&profitPercentage;
	
	if(*ptrtotalCost!=0 && *ptrProfitLoss>0)
	{
		*ptrProfitPercentage=*ptrProfitLoss/ *ptrtotalCost * 100;
	}
	else
	{
		*ptrProfitPercentage=0;
	}
	
	double *ptrLarger;
	if(*ptrCost>*ptrSell)
	{
		printf("Larger is cost price\n");
		ptrLarger=ptrCost;
	}
	else
	{
		printf("Larger is selling price\n");
		ptrLarger=ptrSell;
	}
	printf("Larger value:%.2lf\n", *ptrLarger);
	
	//Addresses of variablees used in this program
	printf("Address of cost Price:%p\n",(void*)&costPrice); 
	//%p used for printing the memory address
	//void*=generic pointer which hold different data types memory addresses
	printf("Address of sell price:%p\n",(void*)&sellPrice);
	printf("Address of Quantity:%p\n",(void*)&quantity);
	printf("Address of Total cost:%p\n",(void*)&totalCost);
	printf("Address of Total sales:%p\n",(void*)&totalSales);
	printf("Address of Profit or loss:%p\n",(void*)&profitLoss);
	printf("Address of profit percentage:%p\n",(void*)&profitPercentage);
	printf("Address of larger value:%p\n",(void*)&ptrLarger);
	
	//Addresses of pointers used in this program
	printf("Address of pointer cost Price:%p\n",(void*)&ptrCost); 
	printf("Address of pointer sell price:%p\n",(void*)&ptrSell);
	printf("Address of pointer Quantity:%p\n",(void*)&ptrQuantity);
	printf("Address of pointer Total cost:%p\n",(void*)&ptrtotalCost);
	printf("Address of pointer Total sales:%p\n",(void*)&ptrtotalSales);
	printf("Address of pointer Profit or loss:%p\n",(void*)&ptrProfitLoss);
	printf("Address of pointer profit percentage:%p\n",(void*)&ptrProfitPercentage);
	printf("Address of pointer larger value:%p\n",(void*)&ptrLarger);
	
	return 0;
}

