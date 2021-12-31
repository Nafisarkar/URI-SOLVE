#include<stdio.h>
#include"Inout.h"

void funstuff(){
    int l,srhnum;
    int loop;
    scanf("%d %d",&l,&srhnum);
    int arr[l]={};
    for(loop=0;loop<l;loop++){
        scanf("%d",&arr[loop]);
    }
    for(loop=0;loop<l;loop++){
        printf("%d\n",arr[loop]);
    }
}


int main(){
    inout();
    int cas,i;
    printf("PLEASE ENTER THE CASE\n");
    scanf("%d",&cas);
    for(i=0;i<cas;i++){
        funstuff();
    }
    return 0;
}