#include<stdio.h>

int main(){
    double actual_price,after_price_increment;
    scanf("%lf %lf",&actual_price,&after_price_increment);


    double Increased=after_price_increment-actual_price;
    double price_incrised = (Increased*100)/actual_price;

    printf("%.2lf%%\n",price_incrised);
    return 0;
}