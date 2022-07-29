#include <stdio.h>
#include <string.h>
#include "inout.h"
int main()
{
	io();
	char name[10];
	
	int n,m;
	scanf("%d%d",&n,&m);
	int count=n;
	for(int i=0;i<m;i++){
		scanf("%s",name);
		if(name[0]=='f' && name[1]=='e'){
			count++;
		}else{
			count--;
		}
	}
	printf("%d\n",count);
    return 0;
}