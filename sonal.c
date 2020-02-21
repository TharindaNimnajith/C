#include<stdio.h>
int main()
{

	char roomType,pay,c;
	int noofrooms,noofnights;	
	float rate;	

	
	do {

	printf("ROOM TYPE : ");
	scanf(" %c", &roomType);

	switch(roomType){
	
		case 'D':	rate = 31000;
				break;

		case 'S':	rate = 35000;
				break;
	
		case 'C':	rate = 50000;		
				break;
		case 'E':	rate = 75000;
				break;
		case 'P':	rate = 100000;
				break;
		default:	printf("INVALID ROOM TYPE\n");
				return -1;

	}	

	printf("NO of ROOMS: " );
	scanf("%d", &noofrooms);

	while ( noofrooms <= 0 ) {
		printf( "Invalid number of rooms \n" );
		printf("NO of ROOMS: " );
		scanf("%d", &noofrooms);
	}

	printf("NO of NIGHTS: ");
	scanf("%d", &noofnights);

	while(noofnights <= 0){
		printf("INVALID");
		printf("NO OF NIGHTS: ");
		scanf("%d", &noofnights);
	}

	printf("PAYING METHOD :");
	scanf(" %c", &pay);

	if ( pay == 'M'){
		printf("TOTAL AMOUNT IS : %.2f", rate * noofrooms * noofnights);
	}
	else if( pay == 'C'){
		printf("TOTAL AMOUNT IS: %.2f", rate * noofrooms * noofnights * 0.9);
	}
	else {
		printf( "ERROR\n" );
	}

	printf("DO YOU WANT TO CONTIUE: ");
	scanf(" %c", &c);

	

	}while(c == 'y' || c == 'Y');
		
	
	return 0;
		

}