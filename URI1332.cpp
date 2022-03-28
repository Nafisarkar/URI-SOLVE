#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    string word;
    while(t--){
        cin>>word;
        int n=word.length();
        if(n=3){
            if(word[0]=='o' && word[1]=='n' || word[1]=='n' && word[2]=='e' || word[0]=='o' && word[2]=='e'){
                cout<<"1"<<endl;
            }
            if(word[0]=='t' && word[1]=='w' || word[1]=='w' && word[2]=='o' || word[0]=='o' && word[2]=='e'){
                cout<<"2"<<endl;
            }
            if(word[0]=='s' && word[1]=='i' || word[1]=='i' && word[2]=='x' || word[0]=='s' && word[2]=='x'){
                cout<<"6"<<endl;
            }
        }else if(n=4){
            if(word[0]=='f' && word[1]=='o' && word[2]=='u' || word[1]=='o' && word[2]=='u' && word[3]=='r' || word[0]=='f' && word[2]=='u' && word[3]=='r' || word[0]=='f' && word[1]=='o' && word[3]=='r'){
                cout<<"4"<<endl;
            }
            if(word[0]=='n' && word[1]=='i' && word[2]=='n' || word[1]=='i' && word[2]=='n' && word[3]=='e' || word[0]=='n' && word[2]=='n' && word[3]=='e' || word[0]=='n' && word[1]=='i' && word[3]=='e'){
                cout<<"9"<<endl;
            }
            if(word[0]=='f' && word[1]=='i' && word[2]=='v' || word[1]=='i' && word[2]=='v' && word[3]=='e' || word[0]=='f' && word[2]=='v' && word[3]=='e' || word[0]=='f' && word[1]=='i' && word[3]=='e'){
                cout<<"5"<<endl;
            }
        }else if(n=5){
            if(word[0]=='t' && word[1]=='h' && word[2]=='r' && word[3]=='e' || word[1]=='h' && word[2]=='r' && word[3]=='e' && word[4]=='e' || word[0]=='t' && word[2]=='r' && word[3]=='e' && word[4]=='e' || word[0]=='t' && word[1]=='h' && word[2]=='r' && word[4]=='e' || word[0]=='t' && word[1]=='h' && word[3]=='e' && word[4]=='e'){
                cout<<"3"<<endl;
            }
        }
    }
    return 0;
}