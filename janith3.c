#include <stdio.h>

int main (void)
{
	int n, count, no, smallest = 9999999;

	printf( "\nEnter a positive integer: " );
	scanf( "%d", &n );

	for ( count = 1; count <= n; count++ ) {
		printf( "Enter a positive integer: " );
		scanf( "%d", &no );
		if ( smallest > no ) 
			smallest = no;
	}
	
	if ( smallest > n )
		smallest = n;
	
	printf( "\nSmallest: %d \n\n", smallest );

	return 0;
}
		