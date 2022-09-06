#include<stdio.h>
#include<stdlib.h>
#include"inout.h"
#include<math.h>

int main(){
    io();
    int x=0;
    scanf("%d",&x);
    double sum=0;
    if(x==0){
        printf("3.0000000000\n");
    }
    else if(x==1){
        printf("3.1666666667\n");
    }else{
        for(int i=2;i<=x;i++){
            if(i==2){
                sum =(6.0/37.0);
            }else{
                sum =1.0/(6+sum);
            }
        }
        printf("%.10f\n",sum+3);
    }
    

    return 0;
}