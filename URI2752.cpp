#include<stdio.h>
int main(){
    char string[50]={"AMO FAZER EXERCICIO NO URI"};
    printf("<%s>\n",string);
    printf("<%30s>\n",string);
    printf("<%.20s>\n",string);
    printf("<%-20s>\n",string);
    printf("<%-30s>\n",string);
    printf("<%.30s>\n",string);
    printf("<%30.20s>\n",string);
    printf("<%-30.20s>\n",string);
    return 0;
}