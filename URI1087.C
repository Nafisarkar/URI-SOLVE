#include<stdio.h>
#include<string.h>
#include "inout.h"

int main()
{
	inout();
	int matrix[3][3];
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			scanf("%d",&matrix);
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%d ",matrix);
		}
	}
	return 0;
}