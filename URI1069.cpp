#include <iostream>
#include <string.h>
#include "inout.h"
using namespace std;

int main(){
    io();
    int x;
    char array[10000];
    cin>>x;
    int diamond_count = 0;
    for(int i=0;i<x;i++){
        scanf("%s",array);
        for(int j=0;j<strlen(array);j++){
            if(array[j]!='.'){
                //cout<<array[j];
                if(array[j]=='<'){
                    for(int l=j;l<strlen(array);l++){
                        if(array[l]=='>'){
                            diamond_count++;
                            array[l]='.'; 
                            // for(int f=0;f<strlen(array);f++){
                            //     cout<<array[f];
                            // } 
                            // cout<<endl;
                            break;
                        }
                    }
                }
            }
        }
        cout<<diamond_count;
        diamond_count = 0;
        cout<<endl;
    }
    return 0;
}