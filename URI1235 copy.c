#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"inout.h"
int main()
{
	inout();
	int run;
	scanf("%d",&run);
	char sen[201];
	for (int i = 0; i < run; ++i)
	{
		scanf(" %s",sen);
		int string_size = strlen(sen);

		char string_one[string_size/2];
		char string_two[string_size/2];
		
		for(int j=0;j<string_size/2;j++){
			string_one[j]= sen[string_size/2-j-1];
			string_two[j]= sen[string_size-1-j];
		}
		string_one[string_size/2]='\0';
		string_two[string_size/2]='\0';
		printf("%s%s\n",string_one,string_two);
		
	// 	printf("size = %d %s\n",string_size,sen);
	}
	return 0;
}