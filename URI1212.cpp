#include<stdio.h>
#include"inout.h"

int main(){
	inout();
	unsigned int a,b;
	while(scanf("%i %i",&a,&b) && a!=0 && b!=0){
		printf("%i\n",a+b);
	}
	return 0;
}