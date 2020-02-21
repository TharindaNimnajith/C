#include <stdio.h>
#define SIZE 5

int main (void)
{
	int array[SIZE];
	int i;
		
	printf( "Enter 5 numbers: \n" );

	for ( i = 0; i < SIZE; i++ ) 
		scanf( "%d", &array[i] );
	
	for ( i = 0; i < SIZE - 1; i++ ) 
		if ( array[i] >= array[i + 1] ) {
			printf( "\nNot in ascending order \n" );
			return -1;
		}

	printf( "\nIn ascending order \n" );

	return 0;
} 


