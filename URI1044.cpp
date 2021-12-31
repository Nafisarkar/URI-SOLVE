#include<stdio.h>
int main(){
int a,b,c,d;
scanf("%d%d",&a, &b);
c =b%a;
d =a%b;
if (c == 0 || d == 0)
{
printf("Sao Multiplos\n");
}
else
{
printf("Nao sao Multiplos\n");
}
    return 0;
}