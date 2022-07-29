#include <iostream>
#include <string.h>
#include "inout.h"
using namespace std;


int main(){
    io();
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        string s;
        cin>>s;
        // cout<<s.length()<<endl;
        for(int j=s.length()+1;j>=0;j--){
            if(s[j]>=97 && s[j]<=122){
                cout<<s[j];
            }
        }
         cout<<endl;
    }
    return 0;
}
