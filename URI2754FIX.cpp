#include<stdio.h>
int main (){
    double A=234.345,B=45.698;
    printf("%.6lf-%.6lf\n",A,B);
    printf("%.0lf-%.0lf\n",A,B);
    printf("%.1lf-%.1lf\n",A,B);
    printf("%.2lf-%.2lf\n",A,B);
    printf("%.3lf-%.3lf\n",A,B);
    printf("%e-%e\n",A,B);// why %e ?
    printf("%E-%E\n",A,B);
    printf("%g-%g\n",A,B);// why %g ?
    printf("%g-%g\n",A,B);
    return 0;
}
//E = exponent expression, simply means power(10, n) or 10 ^ n
//F = fraction expression, default 6 digits precision
//G = gerneral expression, somehow smart to show the number in a concise way (but really?)