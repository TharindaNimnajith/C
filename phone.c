#include <stdio.h>
int main(void)
{
	int phoneNumber;
	float lc,ic,rc;

	FILE *cfPtr;

	cfPtr = fopen("charges.dat","w");

	if( cfPtr == NULL) {
		printf("file cannot open");
		return -1;
	}
	fprintf( cfPtr , "phone no\t local call charges\t international call charges\t roaming charges\n\n");
	
	printf( "enter phone number:");
	scanf("%d", &phoneNumber);

	while ( phoneNumber != -1 )
	{
		printf("Enter local call chages:");
		scanf("%f", &lc);

		printf("Enter international call charges:");
		scanf("%f", &ic);

		printf("Enter roaming charges:");
		scanf("%f", &rc);

		fprintf( cfPtr, "%010d\t   %8.2f\t   %8.2f\t    %8.2f\n", phoneNumber,lc,ic ,rc);

		printf( "\n\n enter phone number (enter -1 to terminate): ");
		scanf("%d", &phoneNumber);
	}
	fclose(cfPtr);
	
	return 0;
} 	