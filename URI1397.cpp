#include<stdio.h>
int main(){
    int inpu1=0,inpu2=0,lop,i,outpu1=0,outpu2=0;
    for(;;){
        scanf("%d",&lop);
        if(lop==0){
            break;
        }
        else{
            for(i=0;i<lop;i++){
                scanf("%d %d",&inpu1,&inpu2);
                if(inpu1==inpu2){
                //do notohing;
                }
                else{
                if(inpu1>inpu2){
                    outpu1++;
                }
                if(inpu2>inpu1){
                    outpu2++;
                }
                }
            }

        printf("%d %d\n",outpu1,outpu2);
        outpu1=0,outpu2=0;
        } 
    }
    return 0;
}