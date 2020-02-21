#include <stdio.h>

float calculateIncrement (int grade, float basicSalary);
float calcTotSalary (float salary, float increment);

int main (void)
{
	int g;
	float bs, i;
	
	printf( "Enter grade: " );
	scanf( "%d", &g );

	printf( "Enter Salary: " ); 
	scanf( "%f", &bs );

	i = calculateIncrement(g, bs);

	printf( "Increment: %.2f \n", i);
	
	printf(  "Total Salary: %.2f \n", calcTotSalary(bs, i) );

	return 0;
}

float calculateIncrement (int grade, float basicSalary)
{
	switch(grade) {

		case 1 : return basicSalary * 0.1;
			 break;

		case 2 : return basicSalary * 0.15;
			 break;

		case 3 : return basicSalary * 0.2;
			 break;

		default: printf("Invalid grade \n");

	}
}

float calcTotSalary (float salary, float increment)
{
	return salary + increment;

}
