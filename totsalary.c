#include <stdio.h>
float calculateIncrement(int grade,float basicSalary);
float calcTotSalary(float salary,float increment);
int main(void)
{
	int grade;
	float salary,basicSalary,increment;

	printf( "Enter salary:");
	scanf( "%f", &basicSalary);

	printf("enter the grade:");
	scanf( "%d", &grade);

	increment = calculateIncrement(grade , basicSalary);

	salary = calcTotSalary(basicSalary,increment);

	printf("increment: %.2f\n", increment );

	printf( "total salary: %.2f",salary);

	return 0;
}

float calculateIncrement(int grade,float basicSalary)
{
	float increment;
	switch(grade){
		case 1 : increment = basicSalary * 10/100;
			break;
		case 2 : increment = basicSalary * 15/100;
			break;
		case 3 : increment = basicSalary * 20/100;
			break;
		default : printf("invalid input");
	}
	return increment;

}

float calcTotSalary(float salary,float increment)
{
	
	float totalSalary;
	totalSalary = salary + increment;

	return totalSalary;
}

