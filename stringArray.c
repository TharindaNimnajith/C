#include <string.h>
char string1[] = "first";
scanf( "%10s", string1 );
char string1[10] = { 'f', 'i', 'r', 's', 't', '\0' };
printf( "%s", string1);
char string2[10];
strcpy( string2, string1 );
int length = strlen( string1 );

#include <stdio.h>
#define SIZE 5
void modifyArray (int b[], int size);
int main (void)
{
	int a[SIZE] = {0, 1, 2, 3, 4};
	modifyArray(a, SIZE);
	return 0;
}
void modifyArray (int b[], int size)
{
	int j;
	for (j = 0; j < size; j++ ) {
		b[j] *= 2;
}