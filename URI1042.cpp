#include<stdio.h>
int main(){
    int num1,num2,num3;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    int temp1=num1;
    int temp2=num2;
    int temp3=num3;
    if(num1>num2){
        int temp=num1;
            num1=num2;
            num2=temp;
    }
    if(num2>num3){
        int temp=num2;
            num2=num3;
            num3=temp;
    }
    if(num1>num2){
        int temp=num1;
            num1=num2;
            num2=temp;
    }
    printf("%d\n%d\n%d",num1,num2,num3);
    puts("\n");
    printf("%d\n%d\n%d\n",temp1,temp2,temp3);
    return 0;
}