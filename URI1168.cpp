#include<stdio.h>
#include<string.h>
//#include"inout.h"
int main(){
    //inout();
    int size=0,numer=0,test=0,j,i;
    char a[100]={};
    scanf("%d",&test);
    for(j=0;j<test;j++){
    scanf("%s",&a);
     size=strlen(a);
    for(i=0;i<size;i++){
        if(a[i]=='1'){
            numer+=2;
        }
        else if(a[i]=='2'){
            numer+=5;
        }
        else if(a[i]=='3'){
            numer+=5;
        }
        else if(a[i]=='4'){
            numer+=4;
        }
        else if(a[i]=='5'){
            numer+=5;
        }
        else if(a[i]=='6'){
            numer+=6;
        }
        else if(a[i]=='7'){
            numer+=3;
        }
        else if(a[i]=='8'){
            numer+=7;
        }
        else if(a[i]=='9'){
            numer+=6;
        }
        else if(a[i]=='0'){
            numer+=6;
        }
      }
    printf("%d leds\n",numer);
    numer=0;
    }
    return 0;
}