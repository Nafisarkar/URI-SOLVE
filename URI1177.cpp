#include<stdio.h>
int main(){
    int loop,k,i,j=0;
    scanf("%d",&loop);
    for(i=0;i<1000;i++){
        
        printf("N[%d] = %d\n",i,j);
        j++;
        if(j==loop){
            j=0;
        }
    }
    return 0;
}