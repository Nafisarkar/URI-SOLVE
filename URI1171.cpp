#include<stdio.h>
int main(){
    int cas,i;
    scanf("%d",&cas);
    int arr[cas];
    for(i=0; i<cas; i++){
        scanf("%d",&arr[i]);
    }
    //sorting;
    int j;
    for(i=0; i<cas; i++){
        for(j=0; j<cas;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int temp,count=0;
    for(i=0; i<cas; i++){
        temp=arr[i];
        if(temp==arr[i]){
            count++;
            if(temp!=arr[i+1]){
                printf("%d aparece %d vez(es)\n",temp,count);
                count=0;
                temp=arr[i+1];
            }
        }
        

    }
    return 0;
}