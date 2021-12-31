#include<stdio.h>
int main(){
    char string1[]={};
    char string2[]={};
    char string3[]={};
    gets(string1);
    gets(string2);
    gets(string3);
    printf("%s%s%s\n",string1 ,string2 ,string3);
    printf("%s%s%s\n",string2 ,string3 ,string2);
    printf("%s%s%s\n",string3 ,string1 ,string2);
    int i;
    for(i=0;i<10;i++){
        if(string1[i]=='\n'){
            break;
        }
        printf("%c",string1[i]);
    }
    for(i=0;i<10;i++){
        if(string2[i]=='\n'){
            break;
        }
        printf("%c",string2[i]);
    }
    for(i=0;i<10;i++){
        if(string3[i]=='\n'){
            break;
        }
        printf("%c",string3[i]);
    }
    printf("\n");
    return 0;
}