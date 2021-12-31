#include<stdio.h>
#include"Inout.h"
void fun(int num,int posi){
    int arr[num],j,i;
        int ps[posi];
        for(i=0;i<num;i++){
            scanf("%d",&arr[i]);
        }
        for(i=0;i<posi;i++){
            scanf("%d",&ps[i]);
        }
    // sorting
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    //printing
    int temp;
    for(i=0;i<posi;i++){
        temp=ps[i];
        printf("%d\n",arr[temp-1]);
    }
}
int main(){
    inout();
    int num,posi;
    while(scanf("%d %d",&num,&posi)!=EOF){
        fun(num,posi);
    }
    
    return 0;
}