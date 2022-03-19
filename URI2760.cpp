#include<iostream>
#include<stdio.h>
#include<cstring>
#include "inout.h"
using namespace std;
int main(){
    inout();
    string s1,s2,s3;
    getline (cin, s1);
    getline (cin, s2);
    getline (cin, s3);
    cout<<s1<<s2<<s3<<endl;
    cout<<s2<<s3<<s1<<endl;
    cout<<s3<<s1<<s2<<endl;
    int f1=s1.length();
    int f2=s2.length();
    int f3=s3.length();
    
    if(f1>10){
        int i=0;
        while(s1[i] != '\0' && i < 10){
            cout<<s1[i];
            i++;
        }
    }else cout<<s1;

    if(f2>10){
        int i=0;
        while(s2[i] != '\0' && i < 10){
            cout<<s2[i];
            i++;
        }
    }else cout<<s2;
    
    if(f3>10){
        int i=0;
        while(s3[i] != '\0' && i<10){
            cout<<s3[i];
            i++;
        }
    }else cout<<s3;
    printf("\n");
    return 0;
}