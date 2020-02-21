#include<stdio.h>
int main()
{

	int phone;
	float local, international, roaming;
	FILE*cfptr;
	cfptr = fopen("charges.dat", "w");
	
	if (cfptr == NULL){
		printf("ERROR");
		return -1;
	}	

	printf("ENTER PHONE NO: ");
	scanf("%d", &phone);

	while ( phone != -1 ) {

		printf("LOCAL: ");
		scanf("%f", &local);

		printf("INTERNATIONAL: ");
		scanf("%f", &international);

		printf("ROAMING: ");
		scanf("%f", &roaming);
		
		fprintf(cfptr,"%010d \t %8.2f \t %8.2f \t %8.2f\n", phone,local,international,roaming);

		printf("ENTER PHONE NO: ");
		scanf("%d", &phone);
	}
	

	fclose(cfptr);	
	return 0;
}