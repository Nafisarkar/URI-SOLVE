#include <stdio.h>
#include <string.h>
#include "inout.h"
int main()
{
	io();
	int x;
	char string[1001];
	while (scanf(" %d", &x) && x != 0)
	{
		int left = 0, right = 0;
		scanf("%s", &string);
		//printf("[str %s]\n", string);
		int string_size = strlen(string);
		//printf("[string size %d ]\n",string_size);
		for (int i = 0; i < string_size; ++i)
		{
			if (string[i] == 'E')
			{
				left++;
			}
			else if (string[i] == 'D')
			{
				right++;
			}
		}
		//printf("[ l ->%d r-> %d ]\n", left, right);
		// printf("[ %s ]\n", string);
		if(left == right){
			printf("N\n", x);
		}
		else if (left > right)
		{
			// printf("[ left ->%d ]\n", left - right);
			int rem = left-right;
			rem = rem % 4;
			//printf("[ l rem -> %d]\n", rem);
			if(rem==0){
				printf("N\n");
			}
			else if(rem==1){
				printf("O\n");
			}
			else if(rem==2){
				printf("S\n");
			}else{
				printf("L\n");
			}
		}
		else if(right > left)
		{
			// printf("[ right ->%d ]\n", right - left);
			int rem = right-left;
			rem = rem % 4;
			//printf("[ r rem -> %d]\n", rem);
			if(rem==0){
				printf("N\n");
			}
			else if(rem==1){
				printf("L\n");
			}
			else if(rem==2){
				printf("S\n");
			}else{
				printf("O\n");
			}
		}
		
	}
	return 0;
}