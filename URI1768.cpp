#include <iostream>
#include "inout.h"

using namespace std;
int main(){
	io();
	int x;
	while(cin>>x){
		int space = (x-1)/2;
		//cout<<"space :" <<space;
		for (int i = 1; i <=x; i+=2)
		{
			//cout<<i<<endl;
			for (int j = 0; j < space; ++j)
			{
				cout<<' ';
			}
			for (int k = 0; k < i; ++k)
			{
				cout<<"*";
			}
			
			cout<<endl;
			space--;
		}
		int space_sec = (x-1)/2;
		for (int i = 1; i <=3; i+=2)
		{
			//cout<<i<<endl;
			for (int j = 0; j < space_sec; ++j)
			{
				cout<<' ';
			}
			for (int k = 0; k < i; ++k)
			{
				cout<<"*";
			}
			
			cout<<endl;
			space_sec--;
		}
		cout<<endl;

	}

	return 0;
}