#include<stdio.h>
int main(){
    double Bonus , Sale , TSalary , FixSalary;
    char Name[10];
    scanf("%s", &Name);
    scanf("%lf", &FixSalary);
    scanf("%lf", &Sale);
    Bonus=0.15*Sale;
    TSalary=Bonus+FixSalary;
    printf("TOTAL = R$ %.2lf\n",TSalary); 
    return 0;
}