#include<iostream>
#include"inout.h"
#include<bits/stdc++.h>
using namespace std;

int main(){
    inout();
    int x;
    cin>>x;
    int arr[x]={};
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    sort(arr,arr+x);
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}