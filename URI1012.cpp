#include<stdio.h>
int main(){
    double A, B, C, tri, cir, trap, squa, rect;
    float pi = 3.14159;
    scanf("%lf %lf %lf",&A ,&B ,&C);
    tri = A*C/2;
    cir = pi *C*C;
    trap =((A+B)/2)*C;
    squa = B*B;
    rect = A*B;
    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cir);
    printf("TRAPEZIO: %.3lf\n",trap);
    printf("QUADRADO: %.3lf\n",squa);
    printf("RETANGULO: %.3lf\n",rect);
    return 0;
}