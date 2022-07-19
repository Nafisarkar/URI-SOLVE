#include<stdio.h>
#include<string.h>
#include<stdio.h>
#include"inout.h"

int main(){
	inout();
	int run;
	scanf("%d",&run);
	for (int i = 0; i < run; ++i)
	{
		char sen[500];
		int right_shieft;
		scanf("%s",&sen);
		scanf("%d",&right_shieft);
		int string_size = strlen(sen);
		for (int i = 0;i<string_size;++i)
		{
			// printf("%c",(sen[i]-right_shieft));
			int index=sen[i]-right_shieft;
            if(index<65){
            	index+=26;
            }
            printf("%c",index);
            
		}
		printf("\n");
	}



	return 0;
}