#include<stdio.h>
#define SIZE 5
int main(void)
{
	double salaries[SIZE] = {-1};
	int i;
	double increment;
	for(i = 0;i < SIZE;i++){
		printf("enter the salary for employ no%d",i+1);
		scanf("%lf",&salaries[i]);
 			while(salaries[i] < 0){
				printf("invalid amount,please re-enter:\n");
				printf("enter the salary for employ no%d",i+1);
				scanf("%lf",&salaries[i]);
			}
		}
    		for(i = 0;i < SIZE;i++){
			if(salaries[i] < 10000){
  				
				increment = salaries[i] * 10/100;
						salaries[i]+=increment;
		}
		}
		printf("employnumber \t salary \n");
    		for(i = 0;i < SIZE;i++){
			printf("%d \t %.2f\n",i + 1,salaries[i]);
                }
                return 0;
}        
			