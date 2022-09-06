#include<stdio.h>
#include"inout.h"

int main(){
	io();
	int run;
	while(scanf("%d",&run)&& (run!=0)){
		//printf("[%d]\n",run);
		int j=0;
        for(int i = 1;j+i<=run;i++){
            j +=i;
            // printf("[j value %d][ i value %d]\n",j,i);
        }
        printf("%d %d\n",j,run-j);

	}

	return 0;
}