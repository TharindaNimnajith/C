#include <stdio.h>
#include <assert.h>

float calDiscount (int time, float totAmount );
void testCalDiscount ();
void displayGift (float finalTot);

int main (void)
{
	int time;
	float amount, discount, finalTot;

	testCalDiscount ();

	printf ( "Enter time: " );
	scanf( "%d", &time );

	while ( time < 16 || time > 22 ) {
		printf( "Invalid time\n" );
		printf ( "Enter time: " );
		scanf( "%d", &time );
	}

	printf( "Enter total amount: " );
	scanf( "%f", &amount );

	discount = calDiscount(time, amount);

	finalTot = amount - discount;

	printf( "Final Total = %.2f \n", finalTot );

	displayGift(finalTot); 

	return 0;
}

float calDiscount (int time, float totAmount )
{
	float discount;

	if ( time >= 16 && time <= 19 ) {

		if ( totAmount >= 5000 )  
			discount = totAmount * 0.1;

		else if ( totAmount >= 2500 )
			discount = totAmount * 0.07;
	}

	else if ( time >= 20 && time <= 22 ) {
		 
		if ( totAmount >= 5000 )
			discount = totAmount * 0.12;

		else if ( totAmount >= 2500 )
			discount = totAmount * 0.09;
	}
	
	return discount;
}

void testCalDiscount ()
{
	assert ( calDiscount(16, 6000) == 600 );
	assert ( calDiscount(21, 2500) == 225 );
	assert ( calDiscount(17, 4000) == 280 );
	assert ( calDiscount(22, 6000) == 720 );

	printf( "All test cases are done \n" );
}

void displayGift (float finalTot)
{
	if ( finalTot >= 7000 )
		printf( "Packet of milk \n" );

	else if ( finalTot >= 5000 ) 
		printf( "1kg of Sugar \n" );

	else
		printf( "Pack of 6 Eggs \n" );
}