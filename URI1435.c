//URI1435.c 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include"inout.h"

void onebox(){
	printf("  1\n\n");
}
void twobox(){
	printf("  1   1\n");
	printf("  1   1\n");
	printf("\n\n");
}
int main(){
	inout();
	int t=0;
	
	while(scanf("%d",&t) && t!=0){
		if(t==1){
			onebox();
		}
		else if(t==2){
			twobox();
		}
	}
	return 0;
}