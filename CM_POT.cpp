#include<stdio.h>
#include<math.h>
int main(){
    int i,j,a,b;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
     scanf("%d",&b);
     printf("1");
     for(j=1;j<=b;j++){
       printf("0");
     }
     printf("\n");
    }
    return 0;
}