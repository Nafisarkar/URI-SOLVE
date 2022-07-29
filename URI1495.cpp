#include <iostream>
#include <algorithm> 
#include "inout.h"
using namespace std;

int main(){
    io();

    int x,y;
    while(cin>>x>>y){ 
        int res[x]={};
        int pointes=0;
        for (int i = 0; i < x; i++)
        {
            int num1,num2;
            cin>>num1>>num2;
            //cout<<num1<<" "<<num2<<endl;
            res[i]=num1-num2;
        }
        int size = sizeof(res) / sizeof(res[0]);
        //cout<<"size -> "<<size<<endl;

        sort(res,res+size);
        for (int i = size-1; i >= 0; i--)
        {
            //cout<<res[i]<<" ";
            if(res[i]>0){
                pointes+=3;
            }
            else if(res[i]==0){
                if(y>0){
                    pointes+=3;
                    y--;
                }else{
                    pointes+=1;
                }
            }
            else if(res[i]<0){
                if((y>0) && (y+(res[i])>=0) ){
                    y=y+(res[i]);
                    // cout<<"y ="<<y<<endl;
                    pointes+=1;
                    if(y>0){
                        pointes+=2;
                        y--;
                    }
                }
            }
        }
        cout<<pointes<<endl;
        // cout<<endl;
    }
    return 0;
}