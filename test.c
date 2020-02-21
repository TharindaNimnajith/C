//IT18149654

//Checking whether a number sequence is in ascending / descending order or not

#include <stdio.h>

#define SIZE 5

//Function main begins the program execution 
int main (void)
{
	//Declaring the array and variables

	int array[SIZE];
	int i;
	

	//Inputs

	printf( "\nEnter 5 numbers: \n" );

	for ( i = 0; i < SIZE; i++ ) 
		scanf( "%d", &array[i] );


	//Checking whether a number sequence is in ascending order or not

	/* Method 1:
  
        if ( array[0] <= array[1] && array[1] <= array[2] && array[2] <= array[3] && array[3] <= array[4] )
		printf( "\nIn ascending order \n" );
	else
		printf( "\nNot in ascending order \n" );  */

	//Method 2:

	for ( i = 0; i < SIZE - 1; i++ ) 
		if ( array[i] >= array[i + 1] ) {
			printf( "\nNot in ascending order \n" );
			return -1;
		}

	printf( "\nIn ascending order \n" );


	//Checking whether a number sequence is in discending order or not

	/* Method 1:
  
        if ( array[0] >= array[1] && array[1] >= array[2] && array[2] >= array[3] && array[3] >= array[4] )
		printf( "\nIn discending order \n" );
	else
		printf( "\nNot in discending order \n" );  */

	//Method 2:

	for ( i = 0; i < SIZE - 1; i++ ) 
		if ( array[i] <= array[i + 1] ) {
			printf( "\nNot in discending order \n" );
			return -1;
		}

	printf( "\nIn discending order \n" );

	return 0;

} //End of function main


