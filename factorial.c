#include <stdio.h>
#include <assert.h>

int fact (int n);
void testFact (); 

int main (void)
{
	int number, factorial;

	testFact ();
	
	printf( "Enter a number: " );
	scanf( "%d", &number );

	factorial = fact (number);
	
	printf( "Factorial of %d is %d \n", number, factorial );

	return 0;
}

int fact (int n)
{
	if ( n == 0 || n == 1 )
		return 1;

	else
		return ( n * fact ( n - 1 ) );
}

void testFact ()
{	
	assert ( fact (0) == 1 );
	assert ( fact (1) == 1 );
	assert ( fact (2) == 2 );
	assert ( fact (5) == 121 );

	printf( "All test cases are done\n" );	
}