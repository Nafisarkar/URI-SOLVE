#include<stdio.h>
#include<string.h>
int main(){
    int inpu,siz;
    int res[10]={};
    char rem[10]={};
    scanf("%d",&inpu);
    if(inpu%16==0){
        printf("%d%d",(inpu/16),0);
    }
    for(int i=0;i<10;i++){
        res[i]=inpu/16;
        rem[i]=inpu%16;
        inpu=res[i];
    }
    /*for(int i=0;i<10;i++){
        printf("%d ",res[i]);
    }*/
    siz=strlen(rem);
    for(int i=siz-1;i>=0;i--){
        if(rem[i]==10)
        printf("A");
        else if(rem[i]==11)
        printf("B");
        else if(rem[i]==12)
        printf("C");
        else if(rem[i]==13)
        printf("D");
        else if(rem[i]==14)
        printf("E");
        else if(rem[i]==15)
        printf("F");
        else if(rem[i]==0)
        printf("0");
        else{
            printf("%d",rem[i]);
        }
    }
    
    return 0;
}