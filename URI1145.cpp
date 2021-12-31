#include<stdio.h>
int main(){
    int range_y,line_length,lop1;
    scanf("%d %d",&line_length,&range_y);
    for(lop1=1;lop1<range_y+1;lop1++){
        printf("%d",lop1);
        if(lop1%line_length==0){
            printf("\n");
        }
        else
            printf(" ");
    }
    return 0;
}