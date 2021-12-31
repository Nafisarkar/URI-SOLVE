#include<stdio.h>
#include<math.h>
int main(){
    double X1,Y1,X2,Y2,Ds;
    scanf("%lf %lf",&X1,&Y1);
    scanf("%lf %lf",&X2,&Y2);
    Ds=sqrt(pow(X2-X1, 2)+pow(Y2-Y1, 2));
    printf("%.4lf\n",Ds);
    return 0;
}
