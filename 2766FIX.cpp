#include<stdio.h>
int main(){

    int N;
    char a[30];
    for(N = 1;N<=10;N++)
    {   scanf("%c",&a);
        if(N==3){
            printf("%s",a);
        }
        if(N==7){
            printf("%s",a);
        }
        if(N==9){
            printf("%s",a);
        }
    }
    return 0;
}