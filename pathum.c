#include<stdio.h>
#define SIZE 5

int main()
{
	double salaries[SIZE] = {-1};
	double increment;
	int a;
	
	for(a = 0; a < SIZE; a++){
		printf("Input the salary of employee %d : ", a + 1);
		scanf("%lf", &salaries[a]);
		
		while(salaries[a] < 0 ) {
			printf ("Please re enter the amount\n" );	
			printf("Input the salary of employee %d : ", a + 1);
			scanf("%lf", &salaries[a]);
		}
	}

	for ( a = 0; a < SIZE; a++ ) {
		if ( salaries[a] < 10000.00 ) {
			increment = salaries[a] * 10 / 100;
			salaries[a] = salaries[a] + increment;	
		}
	}

	printf( "Employee number \t Salary \n" );

	for ( a = 0; a < SIZE; a++){
		printf("%d \t\t\t %8.2f \n", a + 1, salaries[a]);
	}	

	return 0;
}