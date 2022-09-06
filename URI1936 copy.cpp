#include<iostream>
#include<string.h>
#include "inout.h"

int main(){
    io();
    int x=0;
    scanf("%d",&x);

    int number=1,res=1;
    int counter=1,last_num=0;
    while(res<x){
        res=res*number;
        if(res>x){
            number=1;
            res=1;
            x=x-last_num;
            counter++;
        }
        //printf("%d\n",res);
        last_num=res;
        number++;
    }
    printf("%d\n",counter);
    return 0;
}