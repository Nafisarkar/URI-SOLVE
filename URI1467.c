#include<stdio.h>
#include"inout.h"

int main(){
	inout();
	int v1,v2,v3;
	while(scanf("%d %d %d",&v1,&v2,&v3)!= EOF){
		if(v1== v2 && v2== v3 && v3== v1){
			printf("*\n");
		}
		else if(v1 == v2 && v3!= v1){
			printf("C\n");
		}
		else if (v2 == v3 && v1 != v2){
			printf("A\n");
		}
		else if (v3 == v1 && v1 != v2){
			printf("B\n");
		}

	}
	return 0;
}