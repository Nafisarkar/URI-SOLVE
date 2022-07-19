#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// #include "inout.h"

int main()
{
	// inout();
	int line_Number=0;
	char sen[2000];
	scanf("%d",&line_Number);
	for(int i=0;i < line_Number;i++){
		int total_sum=0;
		int array[27]={};
		scanf(" %[^\n]",sen);
		int string_size = strlen(sen);
		// printf("%s  and size is %d\n",sen,string_size);

		for(int j=0;j<string_size;j++){
			if((sen[j]>96) && (sen[j]<123)){
				// printf("accesed  for %c INDEX = %d\n",sen[j],sen[j]-96);
				if(array[sen[j]-96]==0){
					array[sen[j]-96]=1;
				}
			}
		}
		int l=0;
		for (int i = 1; i < 27; ++i)
		{
			// printf("%c %d\n",('a'+ l),array[i]);
			l++;
			total_sum+=array[i];
		}
		// printf("total_sum = %d\n",total_sum);

		if(total_sum==26){
			printf("frase completa\n");
		}else if(total_sum>=13){
			printf("frase quase completa\n");
		}else{
			printf("frase mal elaborada\n");
		}
		total_sum=0;
	}

	return 0;
}