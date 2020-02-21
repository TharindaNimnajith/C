#include <stdio.h>
int main (void)
{
	int number = 10;

	FILE *cfPtr;
	cfPtr = fopen( "student.dat", "w" );

	if ( cfPtr == NULL ) {
		printf( "File cannot be created\n" );
		return -1;
	}


	fprintf( cfPtr, "%d", number ); 

	fclose (cfPtr);
	return 0;
}