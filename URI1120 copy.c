#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "inout.h"
int main()
{
    // inout();
    int num = 0;
    char sen[200];
    int total_sum = 0;
    while (scanf("%d %s", &num, &sen) != EOF && (num != 0))
    {
        int string_size = strlen(sen);
        char tempchar = (num + '0');
        int zero_count = 0;
        for (int i = 0; i < string_size; i++)
        {
            total_sum += (sen[i] - '0');
            if (0 == (sen[i] - '0'))
            {
                zero_count++;
            }
        }
        int item_printed = 0;
        if (zero_count == 0)
        {
            for (int i = 0; i < string_size; i++)
            {
                if (sen[i] != tempchar)
                {
                    item_printed++;
                    printf("%c", sen[i]);
                }
            }
        }
        else
        {
            int index_of_newchar = 0;
            int lock = 0;
            for (int i = 0; i < string_size; i++)
            {
                if (sen[i] != '0' && sen[i] != tempchar)
                {
                    index_of_newchar = i;
                    // printf("index_of_newchar = %d ",index_of_newchar);
                    item_printed++;
                    lock = 1;
                }
                if (lock == 1 && sen[i] != tempchar)
                {
                    item_printed++;
                    printf("%c", sen[i]);
                }
            }
        }
        if (item_printed == 0)
        {
            printf("0");
        }
        printf("\n");
        // printf("num = %d sen = %s string size =%d total_sum = %d \n",num ,sen, string_size, total_sum);
        total_sum = 0;
    }
    return 0;
}