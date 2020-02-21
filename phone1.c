#include <stdio.h>

int main(void)
{
	int phoneNumber;
	float lc, ic, rc, total;

	FILE *cfPtr;

	cfPtr = fopen( "charges.dat", "r" );

	if( cfPtr == NULL) {
		printf( "File cannot open \n" );
		return -1;
	}

	fscanf( cfPtr, "%d %f %f %f", &phoneNumber, &lc, &ic, &rc );
	total = lc + ic + rc;

	 while ( !feof (cfPtr) ) {
		printf( "total for %d is %.2f\n",phoneNumber, total );
		fscanf( cfPtr, "%d %f %f %f", &phoneNumber,&lc,&ic,&rc );
		total = lc + ic + rc;
	} 

	fclose (cfPtr);

	return 0;
}