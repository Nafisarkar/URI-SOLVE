#include<stdio.h>
#include<string.h>
int chk(int a){
 int arr[a];
 int i,l=0,temp=0,k,count=0,p=0;
 for(i=0;i<a;i++)
 {
   scanf("%d",&temp);
   for(k=0;k<a;k++){
     if(arr[k]==temp){
       count++;
     }
     else{
       arr[l]=temp;
       p++;
     }
   }
 }
 return count;
}

int main(){
  int a,b,match;
  while(true){
    scanf("%d %d",&a,&b);
    if(a==0 && b==0){
      break;
    }
    else{
      match=chk(b);
      printf("%d\n",match);
    }
    }
  return 0;
}
