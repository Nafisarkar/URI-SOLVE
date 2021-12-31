#include<stdio.h>
#include"Inout.h"
int main(){
	inout();
	int a;
	scanf("%d",&a);
	int i,n;
	for(i=0;i<a;i++){
		scanf("%d",&n);
		if(n%2==0){
			printf("0\n");
		}
		else
			printf("1\n");
		}
	
	return 0;
}