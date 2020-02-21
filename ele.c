//IT18149654

#include <stdio.h>

int main (void)
{
	float electricity[4][7] = {{1.2, 2.1, 0.8, 0.0, 1.0, 1.3, 4.0}, {1.5, 3.2, 1.0, 1.3, 4.0, 1.5, 3.2}, 
				  	{2.3, 0.4, 1.2, 2.1, 0.8, 0.0, 2.6}, {2.1, 1.7, 7.0, 1.2, 2.1, 0.8, 0.0}};
	int i, j, week, day, date;
	float max, min, total = 0, avg;
	/* float electricity[4][7];

	for ( i = 0; i < 4; i++ ) {
		for ( j = 0; j < 7; j++ ) {
			printf( "Enter data for week %d - day %d : ", i + 1, j + 1 );
			scanf( "%f", &electricity[i][j] );
		}
	} */

	max = electricity[0][0];
	week = 1;
	day = 1;
	date = 1;
	
	for ( i = 0; i < 4; i++ ) {
		for ( j = 0; j < 7; j++ ) {
			if ( max < electricity[i][j] ) {
				max = electricity[i][j];
				week = i;
				day = j + 1;
				date = week * 7 + day;
			}
		}
	}

	printf( "\n\nDay of the Month with maximum usage: %d \n\n", date );
	printf( "Maximum Usage in units: %.1f \n\n", max );

	min = electricity[0][0];
	week = 1;
	day = 1;
	date = 1;
	
	for ( i = 0; i < 4; i++ ) {
		for ( j = 0; j < 7; j++ ) {
			if ( min > electricity[i][j] ) {
				min = electricity[i][j];
				week = i;
				day = j + 1;
				date = week * 7 + day;
			}
		}
	}

	printf( "Day of the Month with minimum usage: %d \n\n", date );
	printf( "Minimum Usage in units: %.1f \n\n", min );

	for ( i = 0; i < 4; i++ ) {
		for ( j = 0; j < 7; j++ ) {
			total = total + electricity[i][j];
		}
	}
	
	avg = total / 28;

	printf( "Average usage for the Month: %.2f \n\n", avg );
	printf( "Total usage for the Month: %.1f \n\n", total );

	return 0;
}