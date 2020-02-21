#include <stdio.h>
int main (void)
{
	int number;

	FILE *cfPtr;
	cfPtr = fopen( "student.dat", "r" );

	if ( cfPtr == NULL ) {
		printf( "File cannot be created\n" );
		return -1;
	}

	fscanf ( cfPtr, "%d", &number );

	printf( "%d", number * number ); 

	fclose (cfPtr);
	return 0;
}