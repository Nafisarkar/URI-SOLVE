#include<stdio.h>

int main(){
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF){  
        long long int res = (a^b);
        printf("%lld\n",res); 
    }
    return 0;
}