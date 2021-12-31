#include<stdio.h>
#include"inout.h"

int numberslicersum(int x){
    int result=0;
    while(x>0){
        int mod = x % 10;
        result += mod;
        x = x / 10;
    }
    return result;

}
int main(){
    inout();
    int n,m;
    
    while(scanf("%d %d",&n,&m)!=EOF){
        int sliced_sum = numberslicersum(m);

        if((sliced_sum % 3)==0){
            printf("%d sim\n",sliced_sum);
        }
        else{
            printf("%d nao\n",sliced_sum);
        }
    }
    return 0;
}