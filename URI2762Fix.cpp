/* doesn't work
#include<stdio.h>
int main (){
    double A, B; //double & char dont work ?
    scanf("%lf.%lf",&A ,&B);
    printf("%lf.%lf", B, A);
    return 0;
}
*/ 

#include<stdio.h>
int main (){
    long A, B;
    scanf("%ld.%ld\n",&A ,&B);
    printf("%ld.%ld\n", B, A);
    return 0;
}
