#include <stdio.h>

int main(void)
{
     int number = 10;

     FILE *cfPtr;
     cfPtr = fopen("data.dat", "w");

     if ( cfPtr == NULL)
                printf("Cannot create file\n");
     else 
                fprintf(cfPtr, "%d\n", number);

     fclose(cfPtr);  
     return 0;
}
