//IT18149654

#include <stdio.h>

int main (void)
{
	int number;
	double local, international, roaming, total;

	FILE *cfPtr1;
	cfPtr1 = fopen ( "charges.dat", "r" );
	
	if ( cfPtr1 == NULL ) {
		printf( "\n File can't be opened! \n\n" );
		return -1;
	} 
	
	printf( " Phone no \t Total Call Charges \n\n" );

	fscanf( cfPtr1, "%d %lf %lf %lf", &number, &local, &international, &roaming );

	while ( !feof (cfPtr1) ) {
		total = local + international + roaming;
		printf( "%010d \t %.2f \n", number, total );
		fscanf( cfPtr1, "%d %lf %lf %lf", &number, &local, &international, &roaming );
	}

	fclose (cfPtr1);

	return 0;
}
