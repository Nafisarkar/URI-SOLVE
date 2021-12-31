#include<stdio.h>
#include<math.h>
int main(){
    double n1,n2,n3,x1,x2,stor;
    scanf("%lf %lf %lf",&n1,&n2,&n3);
    if(((n2*n2)-4*n1*n3)<0 || n1==0){
        printf("Impossivel calcular\n");
    }
    else{
        stor=sqrt((n2*n2)-4*n1*n3);
        printf("R1 = %.5lf\n",(-n2+stor)/(2*n1));
        printf("R2 = %.5lf\n",(-n2-stor)/(2*n1));
    }
    return 0;
}