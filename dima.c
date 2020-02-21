#include <stdio.h>

int main (void)
{
	int ABC[2][3];
	int i, j;

	for ( i = 0; i < 2; i++){
		for(j = 0; j < 3;j++) {
			printf("enter value for row %d column %d: ", i, j );
			scanf("%d", &ABC[i][j]);
		}
	}

	for ( i = 0; i < 2; i++){
		for(j = 0; j < 3;j++) {
			printf("%d ", ABC[i][j] );
		}
		puts( "" );
	}



	return 0;
}