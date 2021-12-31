#include<stdio.h>
#include<math.h>
int main(){
    int taka,poisa;
    double poisa2;
    scanf("%d.%d",&taka,&poisa);
    puts("NOTAS:");
    printf("%d nota(s) de R$ 100.00\n",taka/100);
    taka=taka%100;
    printf("%d nota(s) de R$ 50.00\n",taka/50);
    taka=taka%50;
    printf("%d nota(s) de R$ 20.00\n",taka/20);
    taka=taka%20;
    printf("%d nota(s) de R$ 10.00\n",taka/10);
    taka=taka%10;
    printf("%d nota(s) de R$ 5.00\n",taka/5);
    taka=taka%5;
    printf("%d nota(s) de R$ 2.00\n",taka/2);
    taka=taka%2;
    puts("MOEDAS:");
    printf("%d moeda(s) de R$ 1.00\n",taka/1);
    taka=taka%1;
    printf("%d moeda(s) de R$ 0.50\n",poisa/50);
    poisa=poisa%50;
    printf("%d moeda(s) de R$ 0.25\n",poisa/25);
    poisa=poisa%25;
    printf("%d moeda(s) de R$ 0.10\n",poisa/10);
    poisa=poisa%10;
    printf("%d moeda(s) de R$ 0.05\n",poisa/5);
    poisa=poisa%5;
    printf("%d moeda(s) de R$ 0.01\n",poisa/1);
    return 0;
}