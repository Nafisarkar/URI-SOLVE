#include<stdio.h>
int main(){
    int temp=0,i,range1,range2,storage=0;
    scanf("%d",&range1);
    scanf("%d",&range2);
    if(range1<range2){
         temp = range1;
        range1 = range2;
        range2 = range1;
    }
    for(i=range2+1;i<range1;i++){
       if(i%2==1||i%2==-1){
           storage+= i;
       }
    }
    printf("%d\n",storage);
    return 0;
}