#include<stdio.h>
int main(){ 
    int fibo[50]={},length,i,j;
    fibo[0]=0,fibo[1]=1;
    scanf("%d",&length);

    for(i=2;i<=length;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    for(j=0;j<length;j++){
        printf("%d",fibo[j]);
        if(j<length-1){
            printf(" ");
        }
        else{
            printf("\n");
        }
    }
    return 0;
}