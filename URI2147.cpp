#include<stdio.h>
int main(){
    char c;
    double store=0.0;
    int b,i;
    scanf("%d ",&b);
    for(i=0;i<b;i++){
        for(;;){
        scanf("%c",&c);
        store+=0.01;
        if(c=='\n'){
            store-=0.01;
            printf("%.2lf\n",store);
            store=0.0;
            break;  
        }
        }
    }
    return 0;
}