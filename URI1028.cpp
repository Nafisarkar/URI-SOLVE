#include <iostream>
#include "inout.h"
using namespace std;

int cards(int x, int y){

    while(y%x != 0)
    {
        int t = x;
        x = y%x;
        y = t;
    }
    return x;
}

int main(){
    io();
    int x;
    cin>>x;
    for (size_t i = 0; i < x; i++)
    {
        int temp1, temp2;
        cin>>temp1>>temp2;
        cout<<cards(temp1, temp2)<<endl;
    }
    
    return 0;
}

