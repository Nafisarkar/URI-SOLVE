#include <iostream>
#include <set>
#include "inout.h"
using namespace std;

int main(){
    io();
    set<int> s;
    int x;
    cin>>x;
    int box[x][x];
    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < x; j++)
        {   
            cin>>box[i][j];
        }
    }
    int run = x*2;
    int array[run];
    for (int i = 0; i < run; i++)
    {
        int tempx,tempy;
        cin>>tempx>>tempy;
        array[i] = box[tempx-1][tempy-1];
        s.insert(box[tempx-1][tempy-1]);
    }
    cout<<s.size()<<endl;
    return 0;
}