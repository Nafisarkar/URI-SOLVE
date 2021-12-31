#include<stdio.h>
int main(){
    int temp=0,i,in1,in2;
    scanf("%d",&in1);
    scanf("%d",&in2);
    if(in1>in2){
        temp=in1;
        in1=in2;
        in2=temp;
    }
    for(i=in1+1;i<in2;i++){
     if(i%5==2 || i%5==3){
         printf("%d\n",i);
     }
    }
    return 0;
} 