#include<stdio.h>
int main(){
    double sal_input=0,total_sal=0,sal_inc;
    scanf("%lf",&sal_input);
    if(sal_input>=0 && sal_input<=400.00){
      total_sal=(15*sal_input)/100;
      printf("Novo salario: %.2lf\n",total_sal+sal_input);
      printf("Reajuste ganho: %.2lf\n",total_sal);
      printf("Em percentual: 15 %s\n","%");
    }
    else if(sal_input>=400.01 && sal_input<=800.00){
      total_sal=(12*sal_input)/100;
      printf("Novo salario: %.2lf\n",total_sal+sal_input);
      printf("Reajuste ganho: %.2lf\n",total_sal);
      printf("Em percentual: 12 %s\n","%");
    }
    else if(sal_input>=800.01 && sal_input<=1200.00){
      total_sal=(10*sal_input)/100;
      printf("Novo salario: %.2lf\n",total_sal+sal_input);
      printf("Reajuste ganho: %.2lf\n",total_sal);
      printf("Em percentual: 10 %s\n","%");
    }
    else if(sal_input>=1200.01 && sal_input<=2000.00){
      total_sal=(7*sal_input)/100;
      printf("Novo salario: %.2lf\n",total_sal+sal_input);
      printf("Reajuste ganho: %.2lf\n",total_sal);
      printf("Em percentual: 7 %s\n","%");
    }
    else if(sal_input>2000.00){
      total_sal=(4*sal_input)/100;
      printf("Novo salario: %.2lf\n",total_sal+sal_input);
      printf("Reajuste ganho: %.2lf\n",total_sal);
      printf("Em percentual: 4 %s\n","%");
    }
    return 0;
}