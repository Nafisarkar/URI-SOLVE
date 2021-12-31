#include<stdio.h>
int main(){
    int i,a,b,count=0,temp;
    for(;;){
        scanf("%d %d",&a,&b);
        if(a<=0 || b<=0){
            break;
        }
        else{
            count=0;
            if(b>a){
            temp = a;
            a=b;
            b=temp;
            }
            
            for(i=b;i<=a;i++){
                count+=i;
                printf("%d ",i);
                }
            printf("Sum=%d\n",count);
        

            
        }
    }
    return 0;
}