#include<stdio.h>
#include "inout.h"

int main(){
	io();
	char box[4] = {1,7,9,3};
	int x;
	scanf("%d",&x);
	int res=0;
	
	for(int i=0;i<x;i++){
		long long y=0;
		scanf("%llu",&y);
		res = (y%4);
		printf("%d\n",box[res]);
	}
	return 0;
}

