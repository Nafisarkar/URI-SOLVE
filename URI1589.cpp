#include<stdio.h>
int main(){
    int i,a,cab1=0,cab2=0,result;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%d %d",&cab1,&cab2);
        printf("%d\n",cab1+cab2);
    }
    return 0;
}