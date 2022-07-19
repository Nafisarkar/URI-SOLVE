#include<stdio.h>
#include<string.h>
#include"inout.h"

int main(){
    
    inout();
    long long int year=0;
    
    while (scanf("%lld",&year)!=EOF)
    {
        int l_count=0,h_count=0,b_count=0;

        if((year%4==0 && year%100!=0) || year%400==0){
            l_count=1;
        }
        if(year%15==0){
            h_count=1;
        }
        if (year%55==0 && l_count==1){
            b_count=1;
        }

        if(l_count==1){
            printf("This is leap year.\n");
        }
        if(h_count==1){
            printf("This is huluculu festival year.\n");
        }
        if(b_count==1){
            printf("This is bulukulu festival year.\n");
        }
        if(l_count==0 && h_count==0 && b_count==0){
            printf("This is an ordinary year.\n");
        }
        int total_cnt=l_count+h_count+b_count;
        // printf("total_cnt:%d\n",total_cnt);
        if(total_cnt>0){
            printf("\n");
        }
        
    }
    return 0;
}