#include <stdio.h>
int main (void)
{
	int i = 1, j = 2, k = 3, m = 2;
	
	printf( " 1. %d \n", i == 1 );
	printf( " 2. %d \n", j == 3 );
	printf( " 3. %d \n", i >= 1 && j < 4 );
	printf( " 4. %d \n", m <= 99 && k < m );
	printf( " 5. %d \n", j >= 1 || k == m );
	printf( " 7. %d \n", !m );
	printf( " 9. %d \n", !( k > m ) );
	printf( "10. %d \n", !( j > k ) );
	
	printf( " 6. %d \n", k + m < j || 3 – j >= k );
	printf( " 8. %d \n", !( j – m ) );

	return 0;
}