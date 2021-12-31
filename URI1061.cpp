#include<stdio.h>
int main(){
    int d1,d2,h1,h2,m1,m2,s1,s2,remsec=0,cusec=0;
    scanf("Dia %d",&d1);
    scanf("%d : %d : %d\n",&h1,&m1,&s1);
    scanf("Dia %d ",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);
    remsec=(d2*86400)+(h2*3600)+(m2*60)+s2;
    cusec=(d1*86400)+(h1*3600)+(m1*60)+s1;

    remsec=remsec-cusec;

    printf("%d dia(s)\n",remsec/86400);
    remsec=remsec%86400;
    printf("%d hora(s)\n",remsec/3600);
    remsec=remsec%3600;
    printf("%d minuto(s)\n",remsec/60);
    remsec=remsec%60;
    printf("%d segundo(s)\n",remsec);
    return 0;
}