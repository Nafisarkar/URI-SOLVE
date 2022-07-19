#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "inout.h";
#define true 1
#define false 0

int main()
{
    inout();
    unsigned run = 0;
    while (scanf("%u", &run)!=EOF)
    {
        if (run == 0)
        {
            break;
        }
        else
        {
            for (unsigned i = 0; i < run; i++)
            {
                char temp[100]={};
                scanf("%s", &temp);
                unsigned counter =0;
                unsigned len = strlen(temp);
                for (int  j = 0; j < len; j++)
                {
                    if(j==0 && temp[j]=='1'){
                        counter+=64;
                    }else if(j==1 && temp[j]=='1' ){
                        counter+=32;
                    }else if(j==2 && temp[j]=='1'){
                        counter+=16;
                    }else if(j==3 && temp[j]=='1'){
                        counter+=8;
                    }else if(j==4 && temp[j]=='1'){
                        counter+=4;
                    }else if(j==5 && temp[j]=='1'){
                        counter+=2;
                    }else if(j==6 && temp[j]=='1'){
                        counter+=1;
                    }
                }
                // printf("ancii indexing -> %d and in char -> %c\n", counter,counter);
                // printf("binary formate -> %s\n", temp);
                if(counter==64 ||  counter ==47 || counter== 92){
                    printf(" ");
                }else{
                    printf("%c", counter);
                }
                counter=0;
            }
            printf("\n");
        }
    }
    return 0;
}