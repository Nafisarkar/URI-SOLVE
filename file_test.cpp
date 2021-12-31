#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int close(int f,int h){
    int c;
    c=f+h;
    return c;
}

int main(){
    int a,value;
    value = close(10,20);
    FILE *fop,*fip;
    fop = fopen("output.txt", "w");
    fip = fopen("input.txt", "r");
    fscanf(fip,"%d",&a);
    if(a==1){
        fprintf(fop,"%s\n%d\n","i am nafi",value);
        

    }
    else{
        fprintf(fop,"%s\n%d\n","you are not nafi",value);
    }
    
    fclose(fop);
    fclose(fip);
    return 0;
}