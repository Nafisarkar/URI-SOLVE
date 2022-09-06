#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// #include "inout.h"
int main(){
	// inout();
	char sen[200];
	while(gets(sen)!=NULL){
		int s = strlen(sen);
		int counter=0;
		for(int i=0;i<s;i++){
			if(sen[i]!=' ' && (sen[i]>58)){
				counter++;
				if((sen[i]>96) && (sen[i]<123) && (counter%2 == 1)){
					sen[i]-=32;
				}else if((sen[i]<91) && (sen[i]>64)&& (counter%2 == 0)){
					sen[i]+=32;
				}
			}
		}
		sen[s]='\0';
		printf("%s\n",sen);

	}

	return 0;
}