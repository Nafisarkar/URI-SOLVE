#include<stdio.h>
#include"inout.h"

int main(){
	inout();

	int x,y;
	while(scanf("%d %d",&x,&y) != EOF){
		if(x == 0 && y == 0){
			printf("0\n");
		}
		else{
			int multiply = x*y;
			multiply = multiply*2;
			printf("%d\n", multiply);
		}
	}
	return 0;
}