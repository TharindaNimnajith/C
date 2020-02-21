#include <stdio.h>

float calculateTotalCost (int itemNo, int quantity);
void printDetails (int itemNo, int quantity, float totalCost);

int main (void)
{
	int itemNumber, Quantity;
	float total_cost;

	printf( "\nEnter item number: " );
	scanf( "%d", &itemNumber );

	printf( "Enter quantity: " );
	scanf( "%d", &Quantity );

	total_cost = calculateTotalCost (itemNumber, Quantity);

	printDetails (itemNumber, Quantity, total_cost);	

	return 0;
}

float calculateTotalCost (int itemNo, int quantity)
{
	float unitPrice, TotalCost;	
	
	switch (itemNo) {
	
	case 1  : unitPrice = 100.00;
		  break;
	case 2  : unitPrice = 200.00;
		  break;
	case 3  : unitPrice = 300.00;
		  break;
	default : printf( "\nInvalid Item Number! \n" );

	}

	TotalCost = unitPrice * quantity;
	
	return TotalCost;
}

void printDetails (int itemNo, int quantity, float totalCost)
{
	printf( "\nItem Number = %d \nQuantity = %d \nTotal Cost = %.2f \n", itemNo, quantity, totalCost );
}
