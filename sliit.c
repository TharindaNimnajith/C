#include <stdio.h>
#define SIZE 5

int main ()
{
	double salaries[SIZE] = {-1};
	double increment;
	int i;

	for(i = 0; i < SIZE; i++){
		printf("enter salary of employee %d : ", i + 1 );
		scanf("%lf", &salaries[i] );
		while ( salaries[i] < 0 ) {
			printf ("Please re-enter the amount\n" );
			printf("enter salary of employee %d : ", i + 1 );
			scanf("%lf", &salaries[i] );
		}
	}

	for ( i = 0; i < SIZE; i++){
		if (salaries[i] < 10000.00 ) {
			increment = salaries[i] * 10 / 100;
			salaries[i] = salaries[i] + increment;
		}
	}

	printf("employ number \t\t salary\n" );

	for ( i = 0; i < SIZE; i++) {
		printf("%d \t\t\t ", i + 1 );
		printf( "%8.2f \n", salaries[i] );
	}

	return 0;
}