#include<stdio.h>
int main(){
    int a =0,b,i,count;
    for(i=1;i<=100;i++){
    scanf("%d",&b);
     if(b>a){
      a=b;
      count=i;
     }
    }
    printf("%d\n%d\n",a,count);
    return 0;
}