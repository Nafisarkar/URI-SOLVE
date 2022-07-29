#include<stdio.h>
#include "inout.h"

void print(int n){
    if(n==0){
        return;
    }else{
        printf("%d \n",n);
        print(n-1);
    }
}


int main(){
    inout();
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}

