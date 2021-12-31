#include<stdio.h>
//#include "Inout.h"
int main(){
    //inout();
    int x,z,i=0,k=0,result=0;
    scanf("%d",&x);
    while(scanf("%d",&z)!=EOF){
        if(z>x){
        }
        else{
            continue;
        }
    }
    for(i=x;;i++){
        k+=i;result++;
        if(k>z){
            break;
        }
    }
    printf("%d\n",result);
    return 0;

}