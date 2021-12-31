#include<stdio.h>
int main(){
    int a,b,i,num;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++){
        num=a%10;
        if(num==0){
            a=a/10;
        }
        else
            a=a-1;
    }
    printf("%d\n",a);
    return 0;
}