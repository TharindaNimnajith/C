#include <stdio.h>
int main(void)

{
	char roomType,payingMethod,con;
	int noOfRooms,noOfNight;
	float ratePerNight, total;

	do {

		printf( "Enter room type:");
		scanf( " %c", &roomType);

		switch(roomType)
		{
			case 'D' :ratePerNight = 31000;
				  break;
			case 'S' :ratePerNight = 35000;
				  break;
			case 'C' :ratePerNight = 50000;
				  break;
			case 'E' :ratePerNight = 75000;
				  break;
			case 'P' :ratePerNight = 100000;
				  break;
			default : printf("Invalid room type");
		        	  return -1;
		}

		printf( "Enter number of rooms:");
		scanf( "%d", &noOfRooms);

		printf( "enter number of night:");
		scanf( "%d", &noOfNight); 
 	 
		printf("enter the paying method:");
		scanf( " %c", &payingMethod);

		if(payingMethod == 'M'){
			total = noOfRooms * noOfNight * ratePerNight;
		}
		else if(payingMethod == 'C'){
			total = noOfRooms * noOfNight * ratePerNight *0.9;
		}
		else
		{
			printf("invalid");
			return -1;
		}
		printf("Total amount is %.2f", total);

		printf("Do You continue(If yes enter Y/y, if no enter N/n) : ");
		scanf(" %c" , &con);

	} while ( con =='Y' || con =='y');

	return 0;
}
