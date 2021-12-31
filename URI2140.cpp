#include<stdio.h>
int main(){
    int cash1, cash2, remcash=0,count=0,ip=0;
    for(;;){
        scanf("%d %d", &cash1, &cash2);
        if(cash1 == 0 && cash2 == 0)
        break;
        else{
            remcash = cash2 - cash1;
            printf("%d\n",remcash);
           if(count != 2 && remcash >= 100){
             remcash = remcash-100;
             count++;
           }
           if(count != 2 && remcash >= 50){
             remcash = remcash-50;
             count++;
           }
           if(count != 2 && remcash >= 20){
             remcash = remcash-20;
             count++;
           }
           if(count != 2 && remcash >= 10){
             remcash = remcash-10;
             count++;
           }
           if(count != 2 && remcash >= 5){
             remcash = remcash-5;
             count++;
           }
           if(count != 2 && remcash >= 2){
             remcash = remcash-2;
             count++;
           }
           if(count <= 2 && count != 0 && remcash == 0){
               ip = 1;
           }
           printf("%d rmch\n",remcash);
           
        }
        if(ip == 1){
            printf("possible\n");
        }
        else{
            printf("impossible\n");
        }
    }
    return 0;
}