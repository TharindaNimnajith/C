#include <stdio.h>
#define SIZE 5

int main (void)
{
	int count;
	double salaries [SIZE] = {-1};
	double increment;

	for ( count = 0; count < SIZE; count++ ) {
		printf( "\n  Input the salary of employee %d : ", count + 1 );
		scanf( "%lf", &salaries[count] );
		while ( salaries[count] < 0 ) {
			printf( "  Please re-enter the amount \n" );
			printf( "  Input the salary of employee %d : ", count + 1 );
			scanf( "%lf", &salaries[count] );
		}
	}

	for ( count = 0; count < SIZE; count++ ) 
		if ( salaries[count] < 10000.00 ) {
			increment = salaries[count] * 10 / 100;
			salaries[count] += increment;
		}
	
	printf( "\n  Employee number \t  Salary \n" );

	for ( count = 0; count < SIZE; count++ ) 
		printf( "\t %d \t\t %8.2f \n", count + 1, salaries[count] );

	puts( "" );	

	return 0;
}