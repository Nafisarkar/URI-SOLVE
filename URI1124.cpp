#include<bits/stdc++.h>
using namespace std;
int main(){
	int tota;
	int a,b,c,d;
	while(cin>>a>>b>>c>>d){
		c=c+c;
		d=d+d;
		tota= c+d;
		cout << "total :"<<tota<<endl;
		if(tota>a && tota>b){
			cout<<"N"<<endl;
		}
		else{
			cout<<"S"<<endl;
		}
	}

	return 0;
}