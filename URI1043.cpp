#include<stdio.h>
int main (){
    float a, b, c, area, Perimeter;
    scanf("%f%f%f",&a ,&b ,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
     Perimeter = a + b + c ;
     printf("Perimetro = %.1f\n",Perimeter);
    }
    else{
        area = .5*(a+b)*c ;
        printf("Area = %.1f\n",area);
    }
    return 0;
}