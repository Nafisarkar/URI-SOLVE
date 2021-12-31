#include<stdio.h>
int main(){
   int Enumber , Hours ;
   float Rate ;
   scanf("%d", &Enumber);
   scanf("%d", &Hours);
   scanf("%f", &Rate);
   float Salary =Hours*Rate;
   printf("NUMBER = %d \n",Enumber);
   printf("SALARY = U$ %0.2f \n",Salary);
   return 0;
}