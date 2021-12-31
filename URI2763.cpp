#include<stdio.h>
int main(){
    long long A,B,C,D;
    scanf("%lld.%lld.%lld-%lld",&A,&B,&C,&D);
    printf("%03lld\n%03lld\n%03lld\n%02lld\n",A,B,C,D);
    return 0;
}