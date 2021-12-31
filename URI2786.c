#include<stdio.h>
#include"inout.h"
int main(){
	inout();
	int l,w;
	int type1;
	int type2;
	scanf("%d %d",&l,&w);
	type1= l*w + (l-1)*(w-1);
	type2= (l-1)*2 + (w-1)*2;
	printf("%d\n",type1);
	printf("%d\n",type2);
	return 0;
}