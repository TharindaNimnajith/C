#include <stdio.h>
#include <math.h>

double answer;

void displayOperators();
void addition(double x, double y);
void substraction(double x, double y);
void multiplication(double x, double y);
void division(double x, double y);
void modulo(double x, double y);
void power(double x, double y);

int main()
{
    FILE *cfPtr;

    cfPtr = fopen("calculator.dat", "w");

    if(cfPtr == NULL)
    {
        printf("File cannot be opened \n");
        return -1;
    }

	char again;

	do {

		printf("Welcome to My Calculator! \n\n");

		displayOperators();

		char symbol;

		printf("Enter which type of operation you want to perform (Use symbols given above): ");
		scanf(" %c", &symbol);
		puts("");

		double n1, n2;

		printf("Enter the first number: ");
		scanf("%lf", &n1);

		printf("Enter the second number: ");
		scanf("%lf", &n2);

		switch (symbol)
		{
			case '+': addition(n1, n2); break;
			case '-': substraction(n1, n2); break;
			case '*': multiplication(n1, n2); break;
			case '/': division(n1, n2); break;
			case '%': modulo(n1, n2); break;
			case '^': power(n1, n2); break;
			default : printf("Invalid operator! Please try again...\n\n");
		}

		fprintf(cfPtr, "%.2f %c %.2f %.2f \n", n1, symbol, n2, answer);

		printf("Do you want to do another calculation? Press 'Y' \n");
		printf("Press any other key to exit \n");
		scanf(" %c", &again);

	} while (again == 'Y' || again == 'y');

	fclose(cfPtr);

	return 0;
}

void displayOperators()
{
	printf("+ => Addition \n");
	printf("- => Subtraction \n");
	printf("* => Multiplication \n");
	printf("/ => Division \n");
	printf("\% => Modulo \n");
	printf("^ => Power \n\n");
}

void addition(double x, double y)
{
    answer = x + y;
	printf("%.2f + %.2f = %.2f \n", x, y, answer);
}

void substraction(double x, double y)
{
    answer = x - y;
	printf("%.2f - %.2f = %.2f \n", x, y, answer);
}

void multiplication(double x, double y)
{
    answer = x * y;
	printf("%.2f x %.2f = %.2f \n", x, y, answer);
}

void division(double x, double y)
{
    answer = x / y;
	printf("%.2f / %.2f = %.2f \n", x, y, answer);
}

void modulo(double x, double y)
{
    answer = (int)x % (int)y;
	printf("%.2f mod %.2f = %.0f \n", x, y, answer);
}

void power(double x, double y)
{
    answer = pow(x, y);
	printf("%.2f ^ %.2f = %.2f \n", x, y, answer);
}
