#include<stdio.h>
int main(){
    int in1,i=0;
    for(;;){
        scanf("%d",&in1);
        if(in1==0){
            break;
        }
        else{
            for(i=1;i<=in1;i++){
                printf("%d",i);
                if(i!=in1){
                    printf(" ");
                }
                else{
                    printf("\n");
                }
            }
        }
    }
    return 0;
}