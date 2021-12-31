#include<stdio.h>
int main(){
    int a,i,l=0,storage,lit;
    scanf("%d",&a);
    int array[a];
    for(i=0;i<a;i++){
        scanf("%d",&array[i]);
          lit=array[0];
          for(l=0;l<a;l++){
        if(array[l]<lit){
            lit=array[l];
            storage=l;
        }
    }
    }  
    printf("Menor valor: %d\nPosicao: %d\n",lit,storage);
    return 0;
}
