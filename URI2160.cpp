#include<iostream>
#include<cstring>
#include"inout.h"
using namespace std;
int main(){
  inout();
  string  sentence;
  getline(cin,sentence);
  cout<<sentence;
  int size = sentence.length();
  // cout<<size<<endl;
  if(size<=80){
    cout<<"YES"<<endl;
  }else{
    cout << "NO" << '\n';
  }
  return 0;
}
