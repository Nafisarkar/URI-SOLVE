#include<stdio.h>
#include"Inout.h"
int main(){
	inout();
	int cas,i;
	int a,b,c;
	scanf("%d",&cas);
	//printf("%d\n",cas);
	for(i=0;i<cas;i++){
		scanf("%d %d %d", &a, &b, &c);
		if(a>=200 && a<=300){
			if(b>=50){
				if(c>=150){
					printf("Sim\n");
				}
				else
					printf("Nao\n");
			}
			else
				printf("Nao\n");
		}
		else
			printf("Nao\n");
	}
	return 0;
}