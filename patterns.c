#include <stdio.h>
void pathum (int x);
int main (void)
{
	int n;
	printf ( "Enter number: " );
	scanf( "%d", &n );

	
	pathum ( n );


	return 0;
}

void pathum (int x)
{
	int rows, columns;
	for ( rows = 1; rows <= x; rows++ ) {
		for( columns = 1; columns <= x; columns++ ) {
			printf( "*" );
		}
		printf( "\n" );
	}
}