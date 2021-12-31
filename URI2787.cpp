#include<stdio.h>
int main(){
    int in1,in2,box=0;
    scanf("%d",&in1);
    scanf("%d",&in2);
    if (in1%2==0 && in2%2==0){
        box=1;
    }
    if(in1%2!=0 && in2%2!=0){
        box=1;
    }
    if(box==1){
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    return 0;
}