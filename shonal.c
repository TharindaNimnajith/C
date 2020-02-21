#include<stdio.h>
int main()
{
	int num;	

	FILE*cfptr;
	cfptr = fopen("data.dat", "r");
	if (cfptr == NULL){
		printf("ERROR");
		return -1;	
	}

	fscanf(cfptr,"%d", &num);
	printf("%d", num * num);
	fclose(cfptr);
	return 0;

}