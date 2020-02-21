#include <stdio.h>
#define SIZE 3
int main (void)
{
	int numbers[SIZE];
	int count, total = 0, product = 1;

	printf( "\nEnter %d numbers: \n", SIZE );

	for ( count = 0; count < SIZE; count++ ) { 
		scanf( "%d", &numbers[count] );
		total += numbers[count];
		product *= numbers[count];
	}

	float average = (float) total / SIZE;

	int largest = numbers[0];
	int smallest = numbers[0];

	for ( count = 0; count < 3; count++ ) {
		if ( largest < numbers[count] )
			largest = numbers[count];
		if ( smallest > numbers[count] )
			smallest = numbers[count];
	}

	printf( "\nSum = %d \n", total );
	printf( "Average = %.2f \n", average );
	printf( "Product = %d \n", product );
	printf( "Largest = %d \n", largest );
	printf( "Smallest = %d \n\n", smallest );

	return 0;
}