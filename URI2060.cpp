#include<stdio.h>
int main(){
    int i,test_case,test_number,mod2=0,mod3=0,mod4=0,mod5=0;
    scanf("%d",&test_case);
    for(i=0;i<test_case;i++){
        scanf("%d",&test_number);
        if(test_number%2==0){
            mod2++;
        }
        if(test_number%3==0){
            mod3++;
        }
        if(test_number%4==0){
            mod4++;
        }
        if(test_number%5==0){
            mod5++;
        }
    }
    printf("%d Multiplo(s) de 2\n",mod2);
    printf("%d Multiplo(s) de 3\n",mod3);
    printf("%d Multiplo(s) de 4\n",mod4);
    printf("%d Multiplo(s) de 5\n",mod5);
    return 0;
}