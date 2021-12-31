#include<stdio.h>

int main()
{
    int a,i;
    a=10;
    char n[40],m[40],o[40],p[40];
    for(i=1;i<=a;i++){
    if(i==3){
    scanf("%s",&m);
    }
    else if(i==7){
    scanf("%s",&o);
    }
    else if(i==9){
    scanf("%s",&p);
    }
    else{
    scanf("%s",&n);
    }
    }
    printf("%s\n",m);
    printf("%s\n",o);
    printf("%s\n",p);
    return 0;
}