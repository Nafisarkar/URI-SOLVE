#include<stdio.h>
#include<math.h>
#include"inout.h"

int main(){
	inout();
	unsigned long time;
	while(1){
		scanf("%ld",&time);
		if(time==0){
			break;
		}
		double g = time/90.0;

		int b=floor(g*1);
		int ge=ceil(g*7);
		printf("Brasil %d x Alemanha %d\n",b,ge);
		
		time = 0;
	}

	return 0;
}