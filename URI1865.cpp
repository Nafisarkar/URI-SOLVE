#include <stdio.h>
int main()
{   int lop1,unumber,num_case;
    char str[200];
    scanf("%d",&num_case);
    for(lop1=0;lop1<num_case;lop1++){
        scanf("%s",&str);
        scanf("%d",&unumber);
        if(str[0]=='T' && str[1]=='h' && str[2]=='o' && str[3]=='r'){
        printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }
    return 0;
}