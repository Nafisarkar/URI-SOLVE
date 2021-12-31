#include<stdio.h>
int main (){
    int Pnum1, Pnum2 , Unit1 , Unit2 ;
    double Value1, Value2, Price ;
    scanf ("%d %d %lf",&Pnum1 ,&Unit1 , &Value1 );
    scanf ("%d %d %lf",&Pnum2 ,&Unit2 , &Value2 );
    Price = (Unit1*Value1)+(Unit2*Value2);
    printf("VALOR A PAGAR: R$ %.2lf\n",Price);
    return 0;
}