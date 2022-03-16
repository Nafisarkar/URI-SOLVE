#include<iostream>
#include"inout.h"
#include<bits/stdc++.h>
using namespace std;

int main(){
    inout();
    long long x;
    cin>>x;
    long long arr[x]={};
    long long total=0,s,st;
    for(long long i=0;i<x;i++){
        cin>>arr[i];
        total+=arr[i];
    }

    for(int i=0;i<x;i++){
        if((i==0 && arr[i]%2==0)||(i==x-1 && arr[i]%2==1)){
            s++;
            if(arr[i]>0){
                arr[i]--;
            }
            break;
        }
        else if(arr[i]%2==1){
            arr[i]--;
            s++;
            i++;
        }
        else if(arr[i]%2==0){
            s++;
            if(arr[i]>0){
                arr[i]--;
            }
            i--;
        }
    }
    printf("%ld %ld",s,total);

    return 0;
}