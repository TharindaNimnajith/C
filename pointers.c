//IT18149654

#include <stdio.h>

int main (void)
{
	int number;
	double local, international, roaming;

	FILE *cfPtr;
	cfPtr = fopen ( "charges.dat", "w" );
	
	if ( cfPtr == NULL ) {
		printf( "\n File can't be created! \n\n" );
		return -1;
	} 

	//fprintf( cfPtr, "Phone No \t   Local Calls   International Calls   Roaming Charges \n\n" );

	printf( "\n Enter the phone number : " );
	scanf( "%d", &number );

	while ( number != -1 ) {

		printf( " Enter local call charges : " );
		scanf( "%lf", &local );

		printf( " Enter international call charges : " );
		scanf( "%lf", &international );

		printf( " Enter roaming charges : " );
		scanf( "%lf", &roaming );

		fprintf( cfPtr, "%010d \t %8.2f \t\t %8.2f \t\t\t %8.2f \n", number, local, international, roaming );

		printf( "\n Enter the phone number (Enter -1 and press enter to terminate the program) : " );
		scanf( "%d", &number );
	}

	fclose (cfPtr);

	return 0;
}