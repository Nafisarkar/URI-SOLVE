#include<stdio.h>
int main(){
    int input,i;
    scanf("%d",&input);
    for (i=1; i <= input; i++)
    {
        printf("Ho");
        if (i!=input)
        {
            printf(" ");
        }
    }
    printf("!\n");
    
    return 0;
}