#include<stdio.h>
#include<string.h>
int main(){
    char name[101]="";
    int a,size;
    scanf("%[^\n]",name);
    size=strlen(name);
    for(a=0;a<size;a++){
        if(name[a]==','){
            printf("\n");
        }
        else
        printf("%c",name[a]);
    }
    printf("\n");
    return 0;
}
