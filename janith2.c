#include <stdio.h>

int main (void)
{
	int n, count, no, largest = 0;

	printf( "\nEnter a positive integer: " );
	scanf( "%d", &n );

	for ( count = 1; count <= n; count++ ) {
		printf( "Enter a positive integer: " );
		scanf( "%d", &no );
		if ( largest < no ) 
			largest = no;
	}
	
	if ( largest < n )
		largest = n;
	
	printf( "\nLargest: %d \n\n", largest );

	return 0;
}
		