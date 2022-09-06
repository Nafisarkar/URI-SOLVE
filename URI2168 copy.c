#include<stdio.h>
#include<string.h>
#include "inout.h"

int main(){
	inout();
	int arr[101][101]={};
	int run;
	scanf("%d",&run);
	for (int i = 0; i < run+1; ++i)
	{
		for (int j = 0; j < run+1; ++j)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	for (int i = 0; i < run; ++i)
	{
		int res=0;
		for (int j = 0; j < run; ++j)
		{
			res = (arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1]);
			// printf("po %d %d - > %d  res %d ",i,j,arr[i][j],res);
			if(res>=2){
				printf("S");
			}else{
				printf("U");
			}
		}
		printf("\n");
		
	}

	// debug ____>>>

	// for (int i = 0; i < run+1; ++i)
	// {
	// 	for (int j = 0; j < run+1; ++j)
	// 	{
	// 		printf("%d ",arr[i][j]);
	// 	}
	// 	printf("\n");
	// }

	return 0;
}