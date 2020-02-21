#include<stdio.h>
int main()
{

	int phone;
	float local, international, roaming,tot;
	FILE*cfptr;
	cfptr = fopen("charges.dat", "r");
	
	if (cfptr == NULL){
		printf("ERROR");
		return -1;
	}	
	
	fscanf(cfptr,"%d %f %f %f",&phone,&local,&international,&roaming);
	
	while(!feof(cfptr)){
		tot = local + international + roaming;
		printf("%010d \t %8.2f\n",phone,tot);
		fscanf(cfptr,"%d %f %f %f",&phone,&local,&international,&roaming);

	}
	
	

	fclose(cfptr);	
	return 0;
}