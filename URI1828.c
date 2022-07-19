#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "inout.h"

int string_to_int(char X,char Y){
	if(X=='p'&& Y=='e'){
		return 1;
	}
	else if(X=='p'&& Y=='a'){
		return 2;
	}
	else if(X=='t'&& Y=='e'){
		return 3;
	}
	else if(X=='l'&& Y=='a'){
		return 4;
	}
	else if(X=='S'&& Y=='p'){
		return 5;
	}
}

int what_rection(int x ,int y){
	if((x==1)&& ((y==4 || y==3))){
		return 1;
	}
	else if((x==2)&& ((y==1 || y==5))){
		return 1;
	}
	else if((x==3)&& ((y==2 || y==4))){
		return 1;
	}
	else if((x==4)&& ((y==2 || y==5))){
		return 1;
	}
	else if((x==5)&& ((y==1 || y==3))){
		return 1;
	}
	else if(x==y){
		return 2;
	}else{
		return 3;
	}
}


int main(){
	inout();
	int run;
	scanf("%d",&run);
	char sen1[10],sen2[10];
	for (int i = 0; i < run; ++i)
	{
		scanf("%s %s",&sen1,&sen2);
		// printf("%s %s\n",sen1,sen2);
		// printf("return sen1 =%d return sen2 =%d\n",string_to_int(sen1[0],sen1[1]),string_to_int(sen2[0],sen2[1]));
		int r1 = string_to_int(sen1[0],sen1[1]);
		int r2 = string_to_int(sen2[0],sen2[1]);
		
		if(what_rection(r1,r2)==1){
			printf("Caso #%d: Bazinga!\n",i+1);
		}else if(what_rection(r1,r2)==3){
			printf("Caso #%d: Raj trapaceou!\n",i+1);
		}else{
			printf("Caso #%d: De novo!\n",i+1);
		}
		
	}


	return 0;
}