//URI1182.c 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
//#include"inout.h"

int main(){
	//inout();
	double array[12][12];
	double res=0;
	int col=0;
	char formula[2];
	scanf("%d",&col);
	scanf("%s",formula);

	for(int i=0;i<=11;i++){
        for(int j=0;j<=11;j++){
            scanf("%lf",&array[i][j]);
            if(j==col){
                res+=array[i][j];
            }
        }
    }
	if(formula[0]=='S'){
		printf("%.1lf\n",res);
	}else{
		printf("%.1lf\n",res/12);
	}
	return 0;
}