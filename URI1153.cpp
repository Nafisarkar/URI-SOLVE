#include<stdio.h>
void fun(int cas){
      int i,j,temp, arr[cas]={};
    for(i=0;i<cas;i++){
        scanf("%d",&arr[i]);
        
    
    }
    //copy arrays
    //this is the second arrays
    int arr2[cas]={};
    for(i=0;i<cas;i++){
        arr2[i]=arr[i];
    }
    //sorting the arrays
    for(i=0;i<cas;i++){
        for(j=0;j<cas;j++){
            if(arr[i]<arr[j]){
                int temp2=arr[i];
                arr[i]=arr[j];
                arr[j]=temp2;
            }
        }
    }
    for(i=0;i<cas;i++){
        //this will check if the same value exist or not;

        if(cas==arr[i]){
            temp=arr[i];
            break;
        }
        //this will find the 
        if(cas<arr[i]){
            temp=arr[i];
            break;
        }
    }
    int index=0;
    for(i=0;i<cas;i++){
        //printf("idx :%d value :%d\n",i,arr2[i]);
        if(temp==arr2[i]){
            index=i;
        }
    }
    
    printf("the index is %d\n",index+1);
}
int main(){
    int cas;
    while(true){
        scanf("%d",&cas);
        if(cas!=0){
            fun(cas);
        }
        else{
            break;
        }
    }
    return 0;
}