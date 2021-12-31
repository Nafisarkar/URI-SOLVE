#include<stdio.h>
int main(){
    int fake_array=19,i,array[20]={},minus=19;
    for(i=0;i<20;i++){
        scanf("%d",&array[i]);
    }
    for(i=19;i>=0;i--){
        printf("N[%d] = %d\n",fake_array-minus,array[i]);
        minus--;
    }
    return 0;
}