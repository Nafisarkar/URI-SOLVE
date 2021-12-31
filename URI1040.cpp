#include <stdio.h>
int main(){
    float a,b,c,d,avg,ex_inpu,af_sum;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    avg=(a*2+b*3+c*4+d*1)/10;
    printf("Media: %.1f\n",avg);
    if(avg>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(avg<5.0){
        printf("Aluno reprovado.\n");
    }
    else if(avg>=5.0 && avg<=6.9){
        printf("Aluno em exame.\n");
        scanf("%f",&ex_inpu);
        printf("Nota do exame: %.1f\n",ex_inpu);
        af_sum=(avg+ex_inpu)/2;
        if(af_sum>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",af_sum);
        }
        else if(af_sum<=4.9){
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",af_sum);
        }
    }
    return 0;
}