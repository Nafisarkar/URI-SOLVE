#include <iostream>
#include <string.h>
#include "inout.h"
using namespace std;

int main(){
    io();
    int x;
    while(cin>>x && x!=0){
        int res=0;
        char array[1000]={};
        int count=0,correct=0;
        for(int i=0;i<x;i++){
            char name;
            int time;
            string status;
            cin>>name>>time>>status;

            if(status[0]=='i'){
                array[count]=name;
                //cout<<"["<<array[count]<<"]"<<endl;
                count++;
            }
            else if(status[0]=='c'){
                res+=time;
                correct++;
                //cout<<"["<<res<<"] ";
                
                for(int j=0;j<strlen(array);j++){
                    if(array[j]==name){
                        res+=20;
                        array[j]='0';
                    }
                }
            }
            //cout<<name<<" "<<time<<" "<<status<<" "<<endl;
        }
        // for(int i=0;i<strlen(array);i++){
        //     cout<<array[i]<<" "<<endl;
        // }
        //cout<<"[Time :"<<res<<"]["<<correct<<"]"<<endl;

        cout<<correct<<" "<<res<<endl;
        res=0;
    }

    return 0;
}
