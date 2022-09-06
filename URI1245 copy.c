#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include"inout.h"

int main()
{
	io();
	int x=0;
	int d_side[100];
	int e_side[100];
	while(scanf("%d",&x)!=EOF){
		
		int d_count=0;
		int e_count=0;
		for(int i=0;i<x;i++){
			int sho_size ;
			char side;
			scanf("%d %c",&sho_size,&side);
			printf("%d %c\n",sho_size,side);
			if(side=='D'){
				d_side[d_count]=sho_size;
				d_count++;
			}else{
				e_side[e_count]=sho_size;
				e_count++;
			}
		}
		printf("[counter d] %d\n",d_count);
		printf("[counter e] %d\n",e_count);

		

	}
	return 0;
}