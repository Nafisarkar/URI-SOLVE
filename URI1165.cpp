#include<stdio.h>
int main(){
    int j,i,test_case,test_number,loop1,loop2,bolen;
    scanf("%d", & test_case);
    for(i = 0;i < test_case;i++){
        bolen = 1;
        scanf("%d", & test_number);
        for(j = 2;j < test_number;j++){
            if(test_number % j == 0){
                bolen = 0;
            }
        }
        if(bolen == 1) printf("%d eh primo\n",test_number);
        else printf("%d nao eh primo\n", test_number);
    }
    return 0;
}
