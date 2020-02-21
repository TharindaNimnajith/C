/* Using structures to declare variables and displaying the output in a table */

#include <stdio.h>

// Creating the structure

struct item {

	int itemNo, quantity;
	double price;

} item1, item2, item3, item4, item5;

// Function main begins the program execution

int main (void)

{

// Inputs

	printf( "\n Enter item number for item 1 \n" );
	scanf( "%d", &item1.itemNo );
	printf( " Enter the price for item 1 \n" );
	scanf( "%lf", &item1.price );
	printf( " Enter the quantity for item 1 \n" );
	scanf( "%d", &item1.quantity );

	printf( "\n Enter item number for item 2 \n" );
	scanf( "%d", &item2.itemNo );
	printf( " Enter the price for item 2 \n" );
	scanf( "%lf", &item2.price );
	printf( " Enter the quantity for item 2 \n" );
	scanf( "%d", &item2.quantity );

	printf( "\n Enter item number for item 3 \n" );
	scanf( "%d", &item3.itemNo );
	printf( " Enter the price for item 3 \n" );
	scanf( "%lf", &item3.price );
	printf( " Enter the quantity for item 3 \n" );
	scanf( "%d", &item3.quantity );

	printf( "\n Enter item number for item 4 \n" );
	scanf( "%d", &item4.itemNo );
	printf( " Enter the price for item 4 \n" );
	scanf( "%lf", &item4.price );
	printf( " Enter the quantity for item 4 \n" );
	scanf( "%d", &item4.quantity );

	printf( "\n Enter item number for item 5 \n" );
	scanf( "%d", &item5.itemNo );
	printf( " Enter the price for item 5 \n" );
	scanf( "%lf", &item5.price );
	printf( " Enter the quantity for item 5 \n" );
	scanf( "%d", &item5.quantity );
	
// Output

	printf( "\n Item No \t  Price      Quantity \n" );
	printf( "   %d \t \t  %.2f \t %d \n", item1.itemNo, item1.price, item1.quantity );
	printf( "   %d \t \t  %.2f \t  %d \n", item2.itemNo, item2.price, item2.quantity );
	printf( "   %d \t \t %.2f \t  %d \n", item3.itemNo, item3.price, item3.quantity );
	printf( "   %d \t \t  %.2f \t %d \n", item4.itemNo, item4.price, item4.quantity );
	printf( "   %d \t \t %.2f \t %d \n", item5.itemNo, item5.price, item5.quantity );

	return 0;

}

// End of the main function