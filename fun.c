//IT18149654

#include <stdio.h>
#define SIZE 5

int main (void) 
{
	int rate[SIZE] = {0};
	int count, rating;
		
	for ( count = 0; count < SIZE; count++ ) {

		printf( "\n Pls input the service rating (1-5): " );
		scanf( "%d", &rating );

		switch (rating) {

			case 1  : rate[0]++;
				  break;
	
			case 2  : rate[1]++;
				  break;

			case 3  : rate[2]++;
				  break;
	
			case 4  : rate[3]++;
				  break;

			case 5  : rate[4]++;
				  break;
		}	
	}

	printf( "\n Rating \t Number \n\n" );

	for ( count = 0; count < SIZE; count++ ) 
		printf( "   %d \t\t   %d \n", count + 1, rate[count] );

	return 0;
}
