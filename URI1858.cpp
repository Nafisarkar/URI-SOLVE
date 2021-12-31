#include<stdio.h>
//#include"Inout.h"
int main(){
    //inout();
    int cas,i;
    scanf("%d",&cas);
    int arr[cas];
    for(i=0; i<cas; i++){
        scanf("%d",&arr[i]);
    }
    int arr2[cas];
    int j;
    for(i=0; i<cas; i++){
        arr2[i] = arr[i];
    }
    for(i=0; i<cas; i++){
        for(j=0;j<cas;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int temp=arr[0],index;
    for(i=0; i<cas; i++){
        if(temp==arr2[i]){
            index=i;
            break;
        }
    }
    printf("%d\n",index+1);
    return 0;
}