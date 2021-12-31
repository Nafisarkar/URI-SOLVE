#include<stdio.h>
int main(){
    int i,test_case,days=0;
    float food;
    scanf("%d",&test_case);
    for(i=0;i<test_case;i++){
        scanf("%f",&food);
        while(food>1){
            food = food/2;
            days++;
        }
        printf("%d dias\n",days);
        days = 0;
    }
    return 0;
}