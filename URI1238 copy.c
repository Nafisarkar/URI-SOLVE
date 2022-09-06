#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "inout.h"
int main(){
	 inout();
	char sen1[500],sen2[500];
	int run;
	scanf("%d",&run);
	for(int i=0;i<run;i++){
		scanf("%s %s",&sen1,&sen2);
		int sen1_length = strlen(sen1);
		int sen2_lenght = strlen(sen2);
		
		// printf("sen1_length = %d\n",sen1_length);
		// printf("sen2_lenght = %d\n",sen2_lenght);

		int counter1=0;
		int counter2=0;

		if((sen1_length<sen2_lenght)||(sen1_length==sen2_lenght)){
			for(int j=1;j<=sen1_length*2;j++){
			if((j%2)!=0){
				printf("%c",sen1[counter1]);
				counter1++;
			}else{
				printf("%c",sen2[counter2]);
				counter2++;
			}
		}
		for(int j=sen1_length;j<sen2_lenght;j++){
			printf("%c",sen2[j]);
		}
		
		}

		if((sen1_length>sen2_lenght)){
			for(int j=1;j<=sen2_lenght*2;j++){
			if((j%2)!=0){
				printf("%c",sen1[counter1]);
				counter1++;
			}else{
				printf("%c",sen2[counter2]);
				counter2++;
			}
		}
		for(int j=sen2_lenght;j<sen1_length;j++){
			printf("%c",sen1[j]);
		}
		
		}

		printf("\n");

		// printf("%s %s\n",sen1,sen2);
	}
	return 0;
}