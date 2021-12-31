#include<stdio.h>
int main(){
    int D ,M ,Y ; //cant use print here
    scanf("%d/%d/%d", &D ,&M ,&Y);
    printf("%02d/%02d/%02d\n", M ,D ,Y); //02 means zeroes padded to two spaces
    printf("%02d/%02d/%02d\n", Y ,M ,D);
    printf("%02d-%02d-%02d\n", D ,M ,Y);
    return 0;
}