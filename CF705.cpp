#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i%2==1){
            printf("I hate ");
        }
        else if(i%2==0){
            printf("I love ");
        }
        if(i==a){
            printf("it");
        }
        else
        printf("that ");
    }
    return 0;
}