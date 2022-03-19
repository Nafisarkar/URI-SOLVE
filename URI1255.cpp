#include<iostream>
#include<string>
#include<stdio.h>
#include"inout.h"
using namespace std;
int main(){
    inout();
    int t;
    cin>>t;
    cin.ignore();
    while (t--) {
        string temp;
        getline(cin,temp);
        cout<<temp<<endl;
    }
    return 0;
}