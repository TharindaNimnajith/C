#include <stdio.h>
#define SIZE 5

int main (void)
{
	int rate[SIZE] = {0};
	int i;

	for ( i = 0; i < SIZE; i++ ) {
		printf( "Pls input the service rating (1-5): " );
		scanf ( "%d", &rate[i] );
		while ( rate[i] < 1 || rate[i] > 5 ) {
			printf ( "Error\n" );	
			printf( "Pls input the service rating (1-5): " );
			scanf ( "%d", &rate[i] );
		}
	}

	printf( "Rating \t Number \n" );
	
	for ( i = 0; i < SIZE; i++ ) {
		printf( "%d \t\t %d \n", i + 1, rate[i] );
	} 
		
	return 0;
}