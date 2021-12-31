#include<stdio.h>
int main(){
    long long int total=0,n1,n2;
    scanf("%lld %lld",&n1,&n2);
    for(n1;n1<=n2;n1++){
       total+=n1;
    }
    printf("%lld\n",total);
    return 0;
}