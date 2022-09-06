#include <stdio.h>
#include <string.h>
#include <math.h>
#include "inout.h"

int main()
{
	inout();
	int run;
	scanf("%d", &run);
	for (int i = 0; i < run; ++i)
	{
		int ter = 0;
		scanf("%d", &ter);
		int res = pow(2, ter);
		res = res - 1;
		printf("%d\n", res);
	}

	return 0;
}