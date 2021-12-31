#include<stdio.h>
int main(){
    int i,loop,input;
    scanf("%d",&loop);
    for(i=1;i<=loop;i++){
        scanf("%d",&input);
        if(input==0){
            printf("NULL\n");
        }
        else if(input%2==0){
            if(input<0){
                printf("EVEN NEGATIVE\n");
            }
            else{
                printf("EVEN POSITIVE\n");
            }
        }
        else if(input%2!=0){
            if(input<0){
                printf("ODD NEGATIVE\n");
            }
            else{
                printf("ODD POSITIVE\n");
            }
        }
    }
    return 0;
}