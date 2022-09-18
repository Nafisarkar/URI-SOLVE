#include<iostream>
#include "inout.h"

using namespace std;
int main(){
	io();
	int x;
	cin>>x;
	while(x--){
		int temp ;
		cin>>temp;
		int res=0;
		for (int i = 1; i < temp; ++i){
			if(temp%i==0){
				res+=i;
			}
		}
		if(res==temp){
			cout<<temp<<" eh perfeito"<<endl;
		}else{
			cout<<temp<<" nao eh perfeito"<<endl;
		}
		
		res=0;
	}

	return 0;
}