#include<stdio.h>
int main(){
    int a,i,b,j,k;
    char plus_minus;
    scanf("%d\n",&a);
    for(i=1;i<=a;i++){
        int total_value=0;
        scanf("%d\n",&b);
        for(j=1;j<b;j++){
            scanf("%c %d\n",&plus_minus,&k);
            if(plus_minus=='+'){
                total_value+=k;
            }
            if(plus_minus=='-'){
                total_value=total_value-k;
            }
        }
        printf("Case %d: %d\n",i,total_value);
    }
    return 0;
}