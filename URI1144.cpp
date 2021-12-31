#include<stdio.h>
int main(){
    int i,inpu,out=1,out2=0,out3=0;
    scanf("%d",&inpu);
    for(i=1;i<=inpu;i++){
        out = i;
        out2 = out*out;
        out3 = out*out*out;
        printf("%d %d %d\n",out,out2,out3);
        printf("%d %d %d\n",out,out2+1,out3+1);

    }
    return 0;
}