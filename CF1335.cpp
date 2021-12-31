#include<stdio.h>
int main()
{
int nani,cese,i,storage;
scanf("%d",&cese);
for(i=0;i<cese;i++){
    scanf("%d", &nani);
     if(nani==1||nani==2){
       printf("0\n");
    }
      else
    {
      storage=(nani-1)/2;
      printf("%d\n",storage);
    }
   }
    return 0;
}