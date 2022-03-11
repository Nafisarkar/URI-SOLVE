#include<stdio.h>
#include"inout.h"
int main(){
	inout();
	char formula[2];
	scanf("%s",formula);
	double array[12][12];
	double sum=0.0;

	int x=11,y=0,counter=0;
	for(int i=0;i<=11;i++){
		
		for(int j=0;j<=11;j++){
			scanf("%lf",&array[i][j]);
			if(j>x && j<y){
				sum+=array[i][j];
				counter++;
			}
		}
		x--;
		y++;
	}
	if(formula[0]=='S'){
		printf("%.1lf\n",sum);
	}else{
		printf("%.1lf\n",sum/counter);
	}

	return 0;
}