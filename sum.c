/* Input two numbers from the keyboard, calculate sum and product & display the output */

#include <stdio.h>

// Function main begins the program execution

int main (void)

{

// Variable Declaration

	int No1, No2, Sum, Product;

// Inputs

	printf( "Enter Number 1 \n" );
	scanf( "%d", &No1 );

	printf( "Enter Number 2 \n" );
	scanf( "%d", &No2 );

// Calculation

	Sum = No1 + No2;
	Product = No1 * No2;

// Output

	printf( "Sum is %d \n", Sum );
	printf( "Product is %d \n", Product );

	return 0;

}

// End of the main function