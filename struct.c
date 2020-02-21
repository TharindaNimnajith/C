#include <stdio.h>

struct studentNames
{
	char name[30];
	int mark;
} student [5];	

int main (void)
{
	int i, x, j = 0, k = 0;
	char passed[5][30];
	char failed[5][30];

	for ( i = 0; i < 5; i++ ) 
	{
		printf( "Enter name:" );
		scanf( "%s", &student[i].name );
	}

	for ( i = 0; i < 5; i++ )
	{
		printf( "Enter marks: " );
		scanf( "%d", &student[i].mark );
	}

	for ( i = 0; i < 5; i++ )
	{
		for ( x = 1; x < 30; x++ ) 
		{
			if ( student[i].mark >= 50 ) 
			{
				passed[j][x] = student[i].name;
				j++;
			}
	
			else
			{
				failed[k][x] = student[i].name;
				k++;
			}
		}
	}
	
	printf( "Passed students: \n" );

	for ( i = 0; i < j; i++ ) 
	{
		printf( "%s \n", passed[i] );
	}

	printf( "Failed students: \n" );

	for ( i = 0; i < k; i++ )
	{
		printf( "%s \n", failed[i] );
	}

 	return 0;
}









