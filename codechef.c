/* Program #2
   Problem Code: FLOW001 (Add Two Numbers) */
   
#include <stdio.h>
 
//function main begins the program execution
int main (void)
{
	int T, i, A, B;
 
	scanf( "%d", &T );
	
	while ( T < 1 || T > 1000 ) {
		printf( "\n Invalid input \n\n" );
		scanf( "%d", &T );
	}
 
	int sum[T];
 
	for ( i = 0; i < T; i++ ) {
	
		scanf( "%d %d", &A, &B );	
		
		while ( A < 1 || B < 1 || A > 10000 || B > 10000 ) {
			printf( "\n Invalid input \n\n" );
			scanf( "%d %d", &A, &B );	
		}
		
		sum[i] = A + B;
	}
	
	for ( i = 0; i < T; i++ ) 
		printf( "%d \n", sum[i] );
	
	return 0;
 
} //end of function main   