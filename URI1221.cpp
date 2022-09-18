#include <iostream>
#include <cmath>
#include "inout.h"

using namespace std;
int main(){
	io();
	int run;
	cin>>run;
	while(run--){
		long temp;
		cin>>temp;
		int test=0;
            
        if(temp == 0 || temp == 1){
        	cout<<"Not Prime"<<endl;
            continue;
        }
            
        if(temp == 2){
            cout<<"Prime"<<endl;
            continue;
        }


		for (long i = 2; i < sqrt(temp)+1; ++i)
		{
			if(temp%i == 0){
				test++;
			}
			if(test ==2){
				break;
			}
			
		}
		if(test>=1){
			cout<<"Not Prime"<<endl;
		}else{
			cout<<"Prime"<<endl;
		}


	}



	return 0;
}