#include<stdio.h>
#define SIZE 10
int main(void)
{
         int marks[SIZE] = {0};
         int i,j=0;
         int total = 0;
         float average = 0;
          for(i = 0;i < SIZE;i++){
            printf("enter the mark for student%d:",i+1);
            scanf("%d",&marks[i]);
            while(marks[i] < 0 || marks[i] > 100){
                    printf("invalid mark,reenter\n");
                    printf("enter the mark for student%d",i+1);
                    scanf("%d",&marks[i]);
            }
          }
          for(i =0;i < SIZE;i++)
              total += marks[i];
            average = (float)total/SIZE;
          
          for(i = 0;i < SIZE;i++){
               if(marks[i] < average){
                     j ++;
           }
          }
          printf("number of failes students are:%d",j);
          return 0;
}
