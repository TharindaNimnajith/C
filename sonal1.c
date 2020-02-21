#include<stdio.h>
int main()
{
	//float elec[4][7]={{1.2,2.1,0.8,0.0,1.0,1.3,4.0},{1.5,3.2,1.0,1.3,4.0,1.5,3.2},
				//{2.3,0.4,1.2,2.1,0.8,0.0,2.6},{2.1,1.7,7.0,1.2,2.1,0.8,0.0}};


	int i,j;
	float max, min,tot=0,avg;
	int day, day1;
	float elec[4][7];

	for(i = 0; i < 4; i++){
		for(j = 0; j < 7; j++){
			printf("ENTER VALUE for week %d day %d: ", i + 1, j + 1);
			scanf("%f", &elec[i][j]);
		}
		
	}

	max = elec[0][0];
	min = elec[0][0];
	for(i = 0; i < 4; i++ ){
		for(j = 0; j < 7; j++){
			if( max < elec[i][j]){
				max = elec[i][j];
				day = (i * 7 + j + 1);
			}
			if (min > elec[i][j]){
				min = elec[i][j];
				day1 = (i * 7 + j + 1);
			}
			tot = tot + elec[i][j];
		}

	}

	avg = tot / 28;
	
	printf("DAY OF MAX USAGE: %d\n",day);
	printf("MAXIMUM USAGE in UNITS: %.1f\n",max);
	printf("DAY OF MIN USAGE: %d\n",day1);
	printf("MINIMUM USAGE in UNITS: %.1f\n", min);
	printf("AVERAGE USAGE: %.2f\n",avg);
	printf("TOTAL USAGE: %.1f\n",tot);	
	return 0;


}