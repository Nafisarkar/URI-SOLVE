#include<stdio.h>
int main(){
   int i;
   char lat[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   char inpu;
   scanf("%c",&inpu);
   for(i=0;i<27;i++){
       if(lat[i]==inpu){
           printf("%d\n",i+1);
           break;
       }
   }
   return 0;
}