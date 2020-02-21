#include <stdio.h>
#include <assert.h>

int add(int n1, int n2);
void testAdd ();

int main (void)
{
	int no1, no2, answer;	

	testAdd ();

	printf( "Enter two integers: " );
	scanf( "%d %d", &no1, &no2 );

	answer = add (no1, no2);

	printf( "Answer is %d \n", answer ); 	

	return 0;
}

int add (int n1, int n2)
{
	return n1 + n2;
}

void testAdd ()
{
	assert ( add (3, 2) == 5 );

	printf( "All test cases are done \n" ); 
}