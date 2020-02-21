#include <stdio.h>

float calculateWeeklySalary (int grade, float hrsWorked);
void printDetails (int grade, float hrsWorked, float salary);

int main (void)
{
	int employeeGrade;
	float hours, weeklySalary;

	printf( "\nEnter grade: " );	
	scanf( "%d", &employeeGrade );

	printf( "Enter total hours worked for the week: " );
	scanf( "%f", &hours );

	weeklySalary = calculateWeeklySalary (employeeGrade, hours);

	printDetails (employeeGrade, hours, weeklySalary);		

	return 0;
}

float calculateWeeklySalary (int grade, float hrsWorked)
{
	float weeklySalary, hourlyRate;

	switch (grade) {

	case 1  : hourlyRate = 100.00;
		  break;
	case 2  : hourlyRate = 200.00;
		  break;
	case 3  : hourlyRate = 300.00;
		  break;
	default : printf( "\nInvalid grade! \n" );
	
	}

	weeklySalary = hrsWorked * hourlyRate;
	
	return weeklySalary;
}

void printDetails (int grade, float hrsWorked, float salary)
{
	printf( "\nGrade = %d \nHours Worked = %.2f \nWeekly Salary = %.2f \n", grade, hrsWorked, salary ); 
}