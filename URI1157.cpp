#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        if(a%b==0)
        printf("%d\n",b);
    }
    return 0;
}