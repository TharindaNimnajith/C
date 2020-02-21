/* Input marks from the keyboard, calculate the average & display the output in a table */

#include <stdio.h>

// Function main begins the program execution

int main (void)

{

	// Variable Declaration

	int Marks1, Marks2, Marks3, Marks4, Marks5, Average;
	
	// Inputs
	
	printf( "Enter Marks for Module Number 1 \n" );
	scanf( "%d", &Marks1 );

	printf( "Enter Marks for Module Number 2 \n" );
	scanf( "%d", &Marks2 );

	printf( "Enter Marks for Module Number 3 \n" );
	scanf( "%d", &Marks3 );

	printf( "Enter Marks for Module Number 4 \n" );
	scanf( "%d", &Marks4 );

	printf( "Enter Marks for Module Number 5 \n" );
	scanf( "%d", &Marks5 );
	
	// Calculation
	
	Average = ( Marks1 + Marks2 + Marks3 + Marks4 + Marks5 ) / 5;
	
	//Outputs
	
	printf( "Module No \t Marks \n" );
	printf( "1 \t \t %d \n", Marks1 );
	printf( "2 \t \t %d \n", Marks2 );
	printf( "3 \t \t %d \n", Marks3 );
	printf( "4 \t \t %d \n", Marks4 );
	printf( "5 \t \t %d \n \n", Marks5 );
	printf( "Average : %d \n", Average );
	
	return 0;

}

// End of the main function