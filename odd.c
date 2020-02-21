#include <stdio.h>
#define SIZE 6

int main (void)
{
	int numArr[SIZE];
	int evenNum[];
	int count = 0;
	int i, j;

	printf( "Enter the number series: \n" );
	
	for ( i = 0; i < SIZE; i++ )  
		scanf( "%d", &numArr[i] );
	 
	printf( "\nEven numbers: " );

	for ( i = 0; i < SIZE; i++ ) { 
		if ( numArr[i] % 2  == 0 ) {
			count++;  
			evenNum[i] = numArr[i];
			printf( "%d ", evenNum[i] );
		}
	}
	  	
	printf( "Number of even numbers: %d \n", count );	

	return 0;
}