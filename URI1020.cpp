#include<stdio.h>
int main(){
    int inpudate,retdate,ratm;
    scanf("%d",&inpudate);
    retdate = inpudate%365,ratm= inpudate/365;
    printf("%d ano(s)\n",ratm);
    inpudate=retdate/30,ratm=retdate%30;
    printf("%d mes(es)\n",inpudate);
    printf("%d dia(s)\n",ratm);
    return 0;
}