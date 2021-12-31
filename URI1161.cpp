#include<stdio.h>
int main(){
    long long int factor,facetor2,i=0,j=0,result=1,result2=1;
    while(scanf("%lld %lld",&factor,&facetor2)!= EOF){
        for(i=1;i<=factor;i++){
           result = result * i; 
        }
        for(j=1;j<=facetor2;j++){
            result2 = result2 * j;
        }
        printf("%lld\n",result+result2);
        result = 1;result2 = 1;
    }
    return 0;
}