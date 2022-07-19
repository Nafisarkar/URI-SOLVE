#include <stdio.h>
#include <string.h>
#include "inout.h"

int charToInt(char c)
{
	int num = 0;
	num = c - '0';
	return num;
}

int main()
{
	inout();
	int pre_carray = 0;
	char sen1[11], sen2[11];
	while (scanf("%s %s", &sen1, &sen2) && ((sen1[0] != '0') && (sen2[0] != '0')))
	{
		int string_size = strlen(sen1);
		int count = 0;
		for (int i = 0; i < string_size - 1; ++i)
		{

			int x = charToInt(sen1[i]);
			int y = charToInt(sen2[i]);
			int res = x + y;

			if (res > 9)
			{
				count++;
				pre_carray = 1;
			}
			else if (res <= 9)
			{
				res += pre_carray;
				if (res > 9)
				{
					count++;
				}
				pre_carray = 0;
			}
		}

		// printf("%s %s\n",sen1,sen2);
		// printf("carray is %d\n",count);
		if (count == 0)
		{
			printf("No carry operation.\n");
		}
		else if (count == 1)
		{
			printf("%d carry operation.\n", count);
		}
		else
		{
			printf("%d carry operations.\n", count);
		}
	}
	return 0;
}