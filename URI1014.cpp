#include<stdio.h>
int main(){
    double A ,money, X;
    scanf("%lf %lf",&A,&money);
    X = A/money;
    printf("%.3lf km/l\n",X);
    return 0;
}