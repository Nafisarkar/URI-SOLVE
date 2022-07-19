#include<stdio.h>
#include<string.h>
#include<math.h>
#include "inout.h"

int main()
{
	inout();
	int x,y;
	while(scanf("%d %d",&x,&y) && (x!=0) && (y!=0)){
		printf("%d\n",(x-(y-x)));
	}
	return 0;
}