#include <stdio.h>
#include <math.h>

void displayOperators();
void twoInputs(double *n1, double *n2);
void oneInput(double *n1);
double addition(double x, double y);
double substraction(double x, double y);
double multiplication(double x, double y);
double division(double x, double y);
int modulo(double x, double y);
double square(double x);
double power(double x, double y);
double squareRoot(double x);
int close();

int main()
{
	char again;

	do {

		printf("Welcome to My Calculator! \n\n");

		displayOperators();

		char symbol;

		printf("Enter which type of operation you want to perform (Use symbols given above): ");
		scanf("%c", &symbol);

		puts("");

		int n1, n2, answer;

		printf("Enter the first number: ");
		scanf("%f", &n1);

		printf("Enter the second number: ");
		scanf("%f", &n2);

		//double *n1, *n2;

		switch (symbol) 
		{
		case '+': answer = n1 + n2;
			break;

		//case '-': 

			default: printf("Invalid operator! Please try again...\n\n");
		}
			
		printf("Do you want to do another calculation? Press 'Y' \n");
		printf("Press any other key to exit \n");
		scanf(" %c", &again);

	} while(again == 'Y' || again == 'y');

    return 0;
}

void displayOperators()
{
	printf("+ => Addition \n");
	printf("- => Substraction \n");
	printf("* => Multiplication \n");
	printf("/ => Division \n");
	printf("% => Modulo \n");
	printf("^ => Power \n");
	printf("# => Square \n");
	printf("$ => Squareroot \n\n");
}

void twoInputs(double *n1, double *n2) 
{
	printf("Enter the first number: ");
	scanf("%f", &n1);

	printf("Enter the second number: ");
	scanf("%f", &n2);
}

void oneInput(double *n1) 
{
	printf("Enter the number: ");
	scanf("%f", &n1);
}

double addition(double x, double y) 
{
	return x + y;
}

double substraction(double x, double y) 
{
	return x - y;
}

double multiplication(double x, double y) 
{
	return x * y;
}

double division(double x, double y) 
{
	return (double) x / y;
}

int modulo(double x, double y) 
{
	return (int) x % (int) y;
}

double square(double x) 
{
	return pow(x, 2);
}

double power(double x, double y) 
{
	return pow(x, y);
}

double squareRoot(double x) 
{
	return sqrt(x);
}

int close() 
{
	return -1;
}
