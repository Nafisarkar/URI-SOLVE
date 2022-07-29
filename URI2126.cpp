#include <iostream>
#include <string.h>
#include "inout.h"
using namespace std;


int main(){
    io();
    char sub_array[1000];
    char main_array[1000];
    int case1=0;
    while(cin>>sub_array){
        case1++;
        int found=0;
        int sub_array_size = strlen(sub_array);
        cin>>main_array;
        int main_array_size = strlen(main_array);
        int last_match_substring_pos=0;
        
        for(int i=0;i<main_array_size+1;i++){
            int target_number = main_array[i];
            int matcher=0;    
            if(target_number == sub_array[0]){
                for(int j=0;j<sub_array_size;j++){
                    if(sub_array[j] == main_array[i+j]){
                        matcher++;
                    }
                }
                if(matcher >= sub_array_size){
                    found++;
                    last_match_substring_pos = i;
                }
            }
        }



        cout<<"Caso #"<<case1<<":"<<endl;
        if(found==0){
            cout<<"Nao existe subsequencia\n"<<endl;
        }else{
            cout<<"Qtd.Subsequencias: "<<found<<endl;
            cout<<"Pos: "<<last_match_substring_pos+1<<"\n"<<endl;
        }

    }
    return 0;
}
