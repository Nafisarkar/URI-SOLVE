#include <stdio.h>
#include "Inout.h"

int main(){
    inout();
    double arr[12][12];
    double total = 0.0;
    char want;
    int row;
    scanf("%d", &row);
    scanf("%c", &want);
    int a,b;

    for(a=0;a<12;a++){
        for(b=0;b<12;b++)
        {
            scanf("%lf", &arr[a][b]);
            if(row == a)
            {
                total += arr[a][b];
            }
        }
    }

    if(want == 'S'){
        printf("%.1lf\n",total);
    }
    else if(want == 'M'){
        total=total/12.0;
        printf("%.1lf\n",total);
    }
    
    return 0;
}