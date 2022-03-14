#include<stdio.h>
#include"inout.h"

int main(){
	inout();
	int x,y;
	scanf("%d%d",&x,&y);
	int array[x][y]={};
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			scanf("%d",&array[i][j]);
		}
	}
	int found=0;
	for(int i=1;i<x-1;i++){
		for(int j=1;j<y-1;j++){
			if(array[i][j]==42){
				if(array[i][j+1]==7 
				&& array[i][j-1]==7 
				&& array[i-1][j-1]==7 
				&& array[i-1][j]==7 
				&& array[i-1][j+1]==7 
				&& array[i+1][j-1]==7
				&& array[i+1][j]==7
				&& array[i+1][j+1]==7){
					printf("%d %d\n",i+1,j+1);
					found++;
					break;	
				}
			}
		}
	}
	if(found==0){
		printf("0 0\n");
	}
	return 0;
}