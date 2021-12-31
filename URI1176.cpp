#include<stdio.h>
long long int dofibo(int f){
  long long int a = 0, b = 1, c, i;
  if(f <= 1){
    return f;
  }
  for(i=2;i<=f;i++){
    c=a+b;
    a=b;
    b=c;
  }
  return b;
}
long long int dofibo2(int f){
  if(f <= 1){
    return f;
  }
  return dofibo(f-1)+dofibo(f-2);
}
void print(int a,long long int b){
  printf("Fib(%d) = %lld\n",a,b);
}
int main(){
  int inp,loop;
  scanf("%d",&loop);
  int i;
  for(i = 0;i<loop;i++){
    scanf("%d",&inp);
    print(inp,dofibo(inp));
  }
  return 0;
}
