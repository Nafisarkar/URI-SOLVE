#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include"inout.h"
int main()
{
	inout();
	char sen[1000];
	while(gets(sen)){
		if(sen[0]=='*'){
			break;
		}
		char first_char=sen[0];
		int string_size=strlen(sen);
		//if first char is Upper charecter 
		char upper_char ;
		char lower_char ;
		if((first_char>64)&&(first_char<91)){
			upper_char = sen[0];
			lower_char = tolower(upper_char);
			// printf("Upper %c %c <<",upper_char,lower_char);
		}
		//if first char is lower charecter
		if((first_char>96)&&(first_char<123)){
			lower_char = sen[0];
			upper_char = toupper(lower_char);
			// printf("lower %c %c <<",upper_char,lower_char);
		}
		int count=0;
		for(int i=1;i<string_size;i++){
			if((sen[i]==' ')&&(sen[i+1]!=upper_char)&&(sen[i+1]!=lower_char)){
				count++;
			}
		}
		if(count==0){
			printf("Y\n");
		}else{
			printf("N\n");
		}
	}
	return 0;
}