#include <stdio.h>

float calDiscountPercent (int productCode);
float calcNewPrice (int percentage, float price); 

int main (void)
{
	int code;
	float Price, Percentage, new;

	printf( "\nEnter price: " );
	scanf( "%f", &Price );

	printf( "Enter product code: " );
	scanf( "%d", &code );

	if ( code >= 100 && code <= 999 ) 
	{		
		Percentage = calDiscountPercent (code);

		new = calcNewPrice (Percentage, Price);

		printf( "New price: %.2f \n", new );
	}

	else
	{
		printf( "Product code is invalid \n" );
	}

	return 0;
}

float calDiscountPercent (int productCode)
{
	float discountPercentage;	

	if ( productCode <= 199 )
	{
		discountPercentage = 10;
	}

	else if ( productCode <= 299 )
	{
		discountPercentage = 15;
	}

	else if ( productCode <= 399 )
	{
		discountPercentage = 20;
	}		

	return discountPercentage;
}

float calcNewPrice (int percentage, float price)
{
	float discount, newPrice;

	discount = ( price * percentage ) / 100;

	newPrice = price - discount;	

	return newPrice;
}