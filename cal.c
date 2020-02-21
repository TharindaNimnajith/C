// Read three different integers from the keyboard and compute the sum, product, average, smallest and largest of these numbers.

#include <stdio.h>

// Function main begins the program execution

int main (void)

{
	// Variable Declaration
	
	int no1, no2, no3, sum, product, largest, smallest;
	float average;

	// Inputs

	printf( "Enter three different integers: " );  // prompt
	scanf( "%d  %d  %d", &no1, &no2, &no3 );  // read three integers
	
	// Calculations

	sum = no1 + no2 + no3;  // calculate sum
	product = no1 * no2 * no3;  // calculate product      
	average = (float) sum / 3;  // calculate average 
	
	// Finding the largest number
 
	if ( no1 > no2 ) 
	{
		if ( no1 > no3 )
		{
			largest = no1;
		}
		else 
		{
			largest = no3;
		}
	}
	else if ( no2 > no3 ) 
	{
		largest = no2;
	}
	else
	{
		largest = no3;
	}
	
	// Finding the smallest number
	
	if ( no1 < no2 )
	{
		if ( no1 < no3 )
		{
			smallest = no1;
		}
		else
		{
			smallest = no3;
		}
	}
	else if ( no2 < no3 )
	{
		smallest = no2;
	}
	else
	{
		smallest = no3;
	}

	// Outputs
	
	printf( "The Sum is %d \n", sum );   // print sum 
	printf( "The Average is %.2f \n", average );  // print average
	printf( "The Product is %d \n", product );  // print product
	printf( "The Largest Number is %d \n", largest );  // print the largest number 
	printf( "The Smallest Number is %d \n", smallest );  // print the smallest number

	return 0;

} // End of the main function