#include<stdio.h>
int main(){
    int i,cs,val=0,c=0,r=0,s=0;
    double total,cal,cal1;
    char letter;
    scanf("%d",&cs);
    for(i=1;i<=cs;i++){
        scanf("%d %c",&val,&letter);
        if(letter=='C'){
            c=c+val;
        }
        if(letter=='R'){
            r=r+val;
        }
        if(letter=='S'){
            s=s+val;
        }
    }
        printf("Total: %d cobaias\n",c+r+s);
        printf("Total de coelhos: %d\n",c);
        printf("Total de ratos: %d\n",r);
        printf("Total de sapos: %d\n",s);
        total=c+r+s;
        cal=100.00/total;
        printf("Percentual de coelhos: %.2lf %c\n",cal*c,37);
        printf("Percentual de ratos: %.2f %c\n",cal*r,37);
        printf("Percentual de sapos: %.2f %c\n",cal*s,37);
    return 0;
}