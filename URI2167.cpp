#include<stdio.h>
int main(){
  int i,run,temp,comp=0,ind=0;
  scanf("%d",&run);
  for(i=1;i<=run;i++){
    scanf("%d",&temp);
    if(temp>comp){
      comp=temp;
    }
    else if(temp<comp){
      if(ind==0){
        ind=i;
      }
    }
  }
  printf("%d\n",ind);
  return 0;
}
