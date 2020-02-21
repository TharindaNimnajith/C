//IT18149654

#include <stdio.h>

int main (void)
{
	char roomType, wantToContinue, payingMethod;
	double ratePerNight, total, payment;
	int numberOfRooms, numberOfNights;
	
	do {
		printf( "\n\n Room Type   Description \n\n" );
		printf( "     D       Deluxe\n" );
		printf( "     S       Superior Deluxe \n" );
		printf( "     C       Club Suites \n" );
		printf( "     E       Executive Suites \n" );
		printf( "     P       Presidential Suite \n" );

		printf( "\n\n Enter Room Type (according to the above list): " );
		scanf( " %c", &roomType );
	
		switch ( roomType ) {
			
			case 'D' : ratePerNight = 31000.00;
				   break;
			case 'S' : ratePerNight = 35000.00;
				   break;
			case 'C' : ratePerNight = 50000.00;
				   break;
			case 'E' : ratePerNight = 75000.00;
				   break;
			case 'P' : ratePerNight = 100000.00;
				   break;
			default  : printf( "\n Invalid Room Type \n\n\n" );
				   return -1;
		}

		printf( "\n Enter the number of rooms: " );
		scanf( "%d", &numberOfRooms );
		
		printf( "\n Enter the number of nights: " );
		scanf( "%d", &numberOfNights );

		total = ratePerNight * numberOfRooms * numberOfNights;

		printf( "\n Enter the paying method ( 'M' for cash, 'C' for credit card ): " );
		scanf( " %c", &payingMethod );

		if ( payingMethod == 'C' ) 
			payment = total * 0.9;

		else if ( payingMethod == 'M' )
			payment = total;

		else {
			printf( "\n Invalid paying method \n" );
			return -1;
		}

		printf( "\n Total payment to the hotel: %.2f \n\n\n", payment );

		printf( "Do you want to continue? ( 'Y'/'y' for Yes, 'N'/'n' for No ): " );
		scanf( " %c", &wantToContinue );
	
	} while ( wantToContinue == 'y' || wantToContinue == 'Y' );
	
	return 0;
}