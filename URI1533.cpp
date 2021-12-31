#include<stdio.h>
#include"Inout.h"
int main(){
    inout();
    int cas,i,j;
    while(scanf("%d",&cas)!=EOF){
        int arr[cas];
        int arr2[cas];
        for( i=0; i<cas; i++){
            scanf("%d",&arr[i]);
        }
        for( i=0; i<cas;i++){
            arr2[i]=arr[i];
        }
        for( i=0; i<cas; i++){
            for( j=0; j<cas; j++){
                if(arr2[i]<arr2[j]){
                    int temp=arr2[i];
                        arr2[i]=arr2[j];
                        arr2[j]=temp;
                }
            }
        }
        int src_value=arr2[cas-2];
        for( i=0; i<cas; i++){
            if(arr[i]==src_value){
                printf("%d\n",i+1);
            }
        }
    }
    return 0;
}