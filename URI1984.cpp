#include <stdio.h>
#include<string.h>
int main() {
    char numbers[]={};
    int storage,i=0;
    scanf("%[^\n]",numbers);
    storage=strlen(numbers);
    for(i=storage;0<=i;i--){
        printf("%c",numbers[i]);
        if(i==0){
            printf("\n");
        }
    }
    return 0;
}