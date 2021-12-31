#include<stdio.h>
#include <string.h>
#include"Inout.h"
int main(){
	inout();
	char arr[150]={};
	int j=0,num=0,count=0,i=0,size=0;
	scanf("%s",&arr);
	//printf("%s\n",arr);
	num=strlen(arr);

	for(j=0;j<num;j++){
		if(arr[j]=='1'){
			count++;
		}
	}
	if(count%2==0){
		printf("%s",arr);
		printf("0\n");
	}
	else{
		printf("%s",arr);
		printf("1\n");
	}
		
		
	return 0;
}