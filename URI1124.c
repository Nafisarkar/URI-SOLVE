#include<stdio.h>
#include"inout.h"

int main(){
    inout();
    int L=0,C=0,R1=0,R2=0,r;
    int cabe;
    while(scanf("%d %d %d %d",&L,&C,&R1,&R2)>0){
        if(!(L || C || R1 || R2)){
            break;
        }

        r = R1 + R2;

        if(L<C){
            int temp;
            temp = C;
            C = L;
            L = temp;
        }
        
        if(R1<R2){
            int temp2;
            temp2 = R2;
            R2 = R1;
            R1 = temp2;
        }

        int coef = (L-r)*(L-r) + (C-r)*(C-r);
        cabe = (C >= 2*R1) && ( coef >= r*r );
        
        if(cabe>0){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
    }

}


