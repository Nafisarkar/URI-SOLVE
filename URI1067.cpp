#include<stdio.h>
int main(){
    int i,input;
    scanf("%d",&input);
    for(i=1;i<=input;i++){
    if(i%2!=0){
       printf("%d\n",i);
    }
    }
    return 0;
}