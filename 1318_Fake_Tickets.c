//1318_Fake_Tickets.c 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include"inout.h"

int main(){
	inout();
	int n,m;
	while(scanf("%d %d",&n,&m) && n!=0 && m!=0){
		int array[20000]={};
		for(int i=0;i<m;i++){
			scanf("%d",&array[i]);
		}
		// for(int i=0;i<m;i++){
		// 	printf("%d ",array[i]);
		// }printf("\n");

		for(int i=0;i<m;i++){
			for(int j=i;j<m;j++){
				if(array[i]>array[j]){
					int temp=array[i];
					array[i]=array[j];
					array[j]= temp;
				}
			}
		}

		int clone[20000]={};
		for(int i=0;i<m;i++){
			printf("%d ",array[i]);
		}printf("\n");
		int counter=0;
		int match=0;
		int current=0;
		int newcurrent=0;
		for(int i=0;i<m;i++){
			if(i==0){
				clone[counter]=array[i];
				counter++;
			}else{
				if(clone[counter-1]==array[i]){
					match++;
					newcurrent=array[i];
				}else{
					clone[counter]=array[i];
					counter++;
				}
			}
		}
	}
	return 0;
}