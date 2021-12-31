#include<stdio.h>

int main(){
    long long int a=0,b=0;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            a=b-a;
        }
        printf("%lld \n",a);
    }
    return 0;
}