#include<stdio.h>
int main(){
  int loop,i,x,y;
  scanf("%d",&loop);
  for(i=0;i<loop;i++){
    scanf("%d %d",&x,&y);
    x = (x*y)/2;
    printf("%d cm2\n",x);
  }
return 0;
}
