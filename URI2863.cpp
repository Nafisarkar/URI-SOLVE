#include<stdio.h>
int main(){
    int inpu,i,j;
    float max,value;
    while(scanf("%d",&inpu)!=EOF){
      max=12.0f;
      for(i=0;i<inpu;i++){
         scanf("%f",&value);
         if(value<max){
           max=value;
         }
      }
      printf("%.2f\n",max);
    }
    return 0;
}