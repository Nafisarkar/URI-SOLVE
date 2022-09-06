#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include"inout.h" 
#define true 1
#define false 0

int main(){
    inout();
    int run;
    while(scanf("%d",&run) && (run!=0)){
        int a,b;
        int res=0;
        for (int i = 0; i < run; ++i)
        {
            scanf("%d %d",&a,&b);

            res = res +(b/2);
        }
        res = floor(res/2);
        printf("%d\n",res);
    }
    return 0;
}