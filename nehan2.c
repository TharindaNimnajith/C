#include <stdio.h>
#define SIZE 10

int main (void)
{
	int c, counts[SIZE];
	
	printf( "\nEnter 10 numbers between 10 to 100: \n" );
	
	for ( c = 0; c < SIZE; c++ ) 
		scanf( "%d", &counts[c] );
	
	int maximum = counts[0];

	for ( c = 0; c < SIZE; c++ ) 
		if ( maximum < counts[c] ) 
			 maximum = counts[c];
		
	printf( "\nThe maximum number is %d \n", maximum );

	return 0;
}