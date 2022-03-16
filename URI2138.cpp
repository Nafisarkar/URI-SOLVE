#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
#include"inout.h"
int main(){
	inout();
	string sen;
	while(cin>>sen){
			int arr[10]={0,0,0,0,0,0,0,0,0,0};
	for(int i=0;i<sen.size();i++){
		if(sen[i]=='0'){
			arr[0]++;
		}
		else if(sen[i]=='1'){
			arr[1]++;
		}
		else if(sen[i]=='2'){
			arr[2]++;
		}
		else if(sen[i]=='3'){
			arr[3]++;
		}
		else if(sen[i]=='4'){
			arr[4]++;
		}
		else if(sen[i]=='5'){
			arr[5]++;
		}
		else if(sen[i]=='6'){
			arr[6]++;
		}
		else if(sen[i]=='7'){
			arr[7]++;
		}
		else if(sen[i]=='8'){
			arr[8]++;
		}
		else if(sen[i]=='9'){
			arr[9]++;
		}
	}
	int max=arr[0],index=0;
	for(int i=0;i<10;i++){
		if(arr[i]>=max){
			max=arr[i];
			index=i;
		}
	}
	cout<<index<<endl;
	}
	// cout<<sen;

}