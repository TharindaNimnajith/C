/* Printing a table using the while loop */

#include <stdio.h>

// function main begins program execution
int main (void)
{	
	int count = 1; // initialization
	
	printf( "N \t 10*N \t 100*N \t 1000*N \n" );  // print the headlines of the table
	
	while ( count <= 10) {  // loop 10 times
 		printf( "%d \t %d \t %d \t %d \n", count, count * 10, count * 100, count * 1000 );  // print the table
		count++;  // increment the count by one
	}  // end while

	return 0;
}  // end function main