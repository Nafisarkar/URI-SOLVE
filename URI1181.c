//URI1181.c 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include"inout.h"
int main()
{
    inout();
    double array[12][12];
    double res = 0;
    char formula;//problem ? why ?
    int m;
    scanf("%d",&m);//space ?
    scanf("%c",&formula);

    for(int i=0;i<=11;i++){
        for(int j=0;j<=11;j++){
            scanf("%lf",&array[i][j]);
            if(i==m){
                res+=array[i][j];
            }
        }
    }
    if(formula=='S'){
        printf("%.1lf\n",res);
    }else{
        printf("%.1lf\n",res/12.0);
    }
    return 0;
}