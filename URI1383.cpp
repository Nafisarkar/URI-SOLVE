#include<iostream>
#include "inout.h"
using namespace std;

int main(){
    io();
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int matrix [9][9];
    int run=0;
    int result=0;
    cin>>run;
    for (int i = 0; i < run; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            for (int k = 0; k < 9; k++)
            {
                cin>>matrix[j][k];
            }
        }
        int box1=0,box2=0,box3=0;
        int up_down_line_res[9]={};
        for (int j = 0; j < 9; j++)
        {
            int left_right_line_res = 0;
            int counter=0;
            for (int k = 0; k < 9; k++)
            {
                //cout<<matrix[j][k]<<"  ";
                left_right_line_res += matrix[j][k];
                up_down_line_res[counter] +=matrix[j][k];
                counter++;
            }
            counter=0;
            if(left_right_line_res==45){
                result++;
            }
            //cout<<"line res -> "<<left_right_line_res<<endl;
            //cout<<endl;

            for (int  k = 0; k < 9; k++)
            {
                if(k<=2){
                    box1+=matrix[j][k];
                }else if(k>2 && k<=5){
                    box2+=matrix[j][k];
                }else if(k>5 && k<=8){
                    box3+=matrix[j][k];
                }
            }
            if(j==2 || j==5 || j==8){
            //cout<<"box1 -> "<<box1;
                if(box1==45){
                    result++;
                }
                if(box2==45){
                    result++;
                }
                if(box3==45){
                    result++;
                }
            //cout<<" box2 -> "<<box2;
            //cout<<" box3 -> "<<box3<<endl;
                box1=0;
                box2=0;
                box3=0;
            }

        }
        for (int j = 0; j < 9; j++)
        {
            if(up_down_line_res[j]==45){
                result++;
            }
            //cout<<up_down_line_res[j]<<" ";
        }
        cout<<"Instancia "<<i+1<<endl;
        if(result==27){
            cout<<"SIM"<<endl<<endl;
        }else{
            cout<<"NAO"<<endl<<endl;
        }
    }
    return 0;
}