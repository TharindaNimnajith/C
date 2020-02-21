#include <stdio.h>
void main ()
{
	int n1, n2, n3, l, s;

	printf( "\nEnter 3 numbers: \n" );
	scanf( "%d %d %d", &n1, &n2, &n3 );

	if ( n1 > n2 && n1 > n3 ) 
		l = n1;
	else if ( n2 > n3 )
		l = n2;
	else
		l = n3;

	if ( n1 < n2 && n1 < n3 )
		s = n1;
	else if ( n2 < n3 )
		s = n2;
	else
		s = n3;

	printf("Sum = %d\nAverage = %.2f\nProduct = %d\nLargest = %d\nSmallest = %d", n1+n2+n3, (float)(n1+n2+n3)/3, n1*n2*n3, l, s);
}