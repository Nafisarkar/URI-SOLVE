#include<stdio.h>
int main(){
    int i,j,a,b,com;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%d",&b);
        for(j=1;j<=b;j++){
            scanf("%d",&com);
            if(com==1){
                printf("Rolien\n");
            }
            if(com==2){
                printf("Naej\n");
            }
            if(com==3){
                printf("Elehcim\n");
            }
            if(com==4){
                printf("Odranoel\n");
            }
        }
    }
    return 0;
}