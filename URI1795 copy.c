#include<stdio.h>
#include<math.h>
#include"inout.h"

int main(){
	inout();
	int x;
	scanf("%d",&x);
	long long int res = pow(3,x);
	printf("%lld\n",res);

	return 0;
}