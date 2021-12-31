#include<stdio.h>
#include"Inout.h"
int main(){
    inout();
    int cas=0,j,i;
    scanf("%d",&cas);
    for(j=0;j<cas;j++){
        int array_size;
           scanf("%d ",&array_size);
        int arr[array_size+1];
        for(i=1;i<=array_size;i++){
            scanf("%d",&arr[i]);
        }
        int temp=0;
        temp=array_size;
        if(temp%2!=0){
            temp=(temp-1)/2;
        }
        else if(temp%2==0){
            temp=(temp/2);
        }
        printf("Case %d: %d\n",j+1,arr[temp+1]);
    }
    return 0;
}