#include<stdio.h>
int main(){
    int n, p, q;
    char c;
    scanf("%d",&n);
    scanf("%d %c %d",&p,&c,&q);
    if(c == '+'){
         if (n>=p+q){
             printf("OK\n");
         }
         else{
             printf("OVERFLOW\n");
         }
    }
    else if(c == '*'){
        if(n>=p*q){
            printf("OK\n");
        }
        else{
            printf("OVERFLOW\n");
        }
    }
    else{

    }
    return 0;
}