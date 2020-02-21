#include <stdio.h>
#include <string.h>

#define SIZE 5

struct customer {

	int number;
	char name[30];
	char type;
	float amount;

} customers[SIZE];

int main (void)
{
	int count;
	float deposit = 0, withdrawal = 0, maxWithdrawal, maxDeposit;
	char withName[30];
	char depName[30];

	for ( count = 0; count < SIZE; count++ ) {
		
		printf( "Enter account number: " );
		scanf( "%d", &customers[count].number );

		printf( "Enter name: " );
		scanf( "%s", customers[count].name );

		printf( "Enter transaction type: " );
		scanf( " %c", &customers[count].type );

		printf( "Enter transaction amount: " );
		scanf( "%f", &customers[count].amount );
		
		puts( "" );
	}

	maxWithdrawal = customers[0].amount;
	maxDeposit = customers[0].amount;

	for ( count = 0; count < SIZE; count++ ) {

		switch (customers[count].type) {

			case 'w' : if ( maxWithdrawal < customers[count].amount ) {
				   	maxWithdrawal = customers[count].amount;
					strcpy(withName, customers[count].name);
				   }       			
				   withdrawal += customers[count].amount;
				   break;

			case 'd' : if ( maxDeposit < customers[count].amount ) {
				   	maxDeposit = customers[count].amount;
					strcpy(depName, customers[count].name);
				   }       			
 				   deposit += customers[count].amount;
				   break;  		
		}
	}
	
	printf( "Total deposits: %.2f \n", deposit );
	printf( "Total withdrawals: %.2f \n", withdrawal );
	printf( "%s has withdrawed the maximum amount\n", withName );
	printf( "%s has deposited the maximum amount\n", depName );
			 
	return 0;
} 