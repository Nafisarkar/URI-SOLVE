#include <stdio.h>
int main(){
  int inpu,i,j,temp=0;
  int n[10]={};
  scanf("%d",&inpu);
  temp=inpu;
  for(i=0;i<10;i++){
      printf("N[%d] = %d\n",i,inpu);
      temp=inpu+inpu;
      inpu=temp;
  }
  return 0;
}

