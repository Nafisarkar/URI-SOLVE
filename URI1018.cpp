#include<stdio.h>
int main (){
int a,b,c,d,e,f,g;
scanf("%d",&a);
printf("%d\n",a);
printf("%d nota(s) de R$ 100,00\n", a/100);
b=a%100;
printf("%d nota(s) de R$ 50,00\n", b/50);
c=b%50;
printf("%d nota(s) de R$ 20,00\n", c/20);
d=c%20;
printf("%d nota(s) de R$ 10,00\n", d/10);
e=d%10;
printf("%d nota(s) de R$ 5,00\n", e/5);
f=e%5;
printf("%d nota(s) de R$ 2,00\n", f/2);
g=f%2;
printf("%d nota(s) de R$ 1,00\n", g);
return 0;
}