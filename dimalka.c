#include <stdio.h>
#define SIZE 10

int main (void)		
{
	int marks[SIZE] = {0};
	int i, tot = 0, count = 0, counter = 0;
	float average;

	puts( "" );
	
	for( i = 0; i < SIZE; i++ ) {
		printf( "Input mark %2d: ", i + 1 );
		scanf( "%d", &marks[i] );
		while( marks[i] < 0 || marks[i] > 100 ) {
			printf( "Invalid marks. Re-enter. \n" );
			printf( "Input mark %d: ", i + 1 );
			scanf( "%d", &marks[i] );
		}
	}

	for( i = 0; i < SIZE; i++ )
		tot = tot + marks[i];
	
	average = (float) tot / SIZE;

	for( i = 0; i < SIZE; i++ ) { 
		if ( marks[i] < average ) 
			count++;
		else
			counter++;
	}
	
	printf( "\nNumber of failed applicants: %d \n", count );

	printf( "Failed  students' marks    : " ); 

	for( i = 0; i < SIZE; i++)  
		if ( marks[i] < average ) 
			printf( "%d ", marks[i] );

	puts( "" );

	printf( "\nNumber of passed applicants: %d \n", counter );	

	printf( "Passed  students' marks    : " ); 	

	for ( i = 0; i < SIZE; i++ ) 
		if ( marks[i] >= average )
			printf( "%d ", marks[i] );

	puts( "" );
	 			
	return 0;
}	
