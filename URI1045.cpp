#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c ;
    scanf("%lf %lf %lf",&a,&b,&c);
    if (a >= (b+c) || b >= (a+c) || c >= (a+b)){
       printf("NAO FORMA TRIANGULO\n");
    } else if  (pow(a,2) == (pow(b,2) + pow(c,2)) || pow(b,2) == (pow(a,2) + pow(c,2)) || pow(c,2) == (pow(a,2) + pow(b,2))) {
        printf("TRIANGULO RETANGULO\n");
    } else if (pow(a,2) > (pow(b,2) + pow(c,2)) || pow(b,2) > (pow(a,2) + pow(c,2)) || pow(c,2) > (pow(a,2) + pow(b,2))){
        printf("TRIANGULO OBTUSANGULO\n");
    } else if (pow(a,2) < (pow(b,2) + pow(c,2)) || pow(b,2) < (pow(a,2) + pow(c,2)) || pow(c,2) < (pow(a,2) + pow(b,2))){
        printf("TRIANGULO ACUTANGULO\n");
    } if (a == b && b == c && c == a){
        printf("TRIANGULO EQUILATERO\n");
    } if(a == b && a != c || c == b && c != a || c == a && b != c){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
