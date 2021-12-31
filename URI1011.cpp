#include<stdio.h>
#include<math.h>
int main(){
   double pi = 3.14159 ,R ;
   double Vol;
   scanf("%lf", &R);
   Vol = (4/3.0) * pi * (R*R*R);
   printf("VOLUME = %.3lf\n",Vol);
   return 0;
}