#include <stdio.h>
int main(){
    int i = 2, j = 3;
    int r = 0,l;
    scanf("%d",&r);
    printf("%d ",i);
    printf("%d ",j);
    printf("%d ",5);
    for(l=0; l<r;l++){
        int temp = i + j;
        printf("%d ",temp);
        i = j ;
        j = temp;
    }
    return 0;
}