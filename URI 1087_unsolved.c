#include<stdio.h>
#include"inout.h"

int main(){
	inout();

	int a,b,x,y;

	while(scanf("%d %d %d %d",&a,&b,&x,&y)!= EOF){
		if(!( a || b | x || y)){
			break;
		}
		else {
			printf("queens prsition is x1 -> %d\n",a);
			printf("queens prsition is y1 -> %d\n",b);
		}
	}
	return 0;
}