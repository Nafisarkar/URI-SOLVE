#include<stdio.h>
int main(){
    int i,in1;
    float res,val1,val2;
    scanf("%d",&in1);
    for(i=1;i<=in1;i++){
        scanf("%f %f",&val1,&val2);
        if(val2==0){
            printf("divisao impossivel\n");
        }
        else{
            res=val1/val2;
            printf("%.1f\n",res);
        }
    }
    return 0;
}