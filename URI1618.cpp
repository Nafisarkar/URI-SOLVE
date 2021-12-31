#include<bits/stdc++.h>
using namespace std;

int main(){
	int cas,Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,Rx,Ry;
	cin>>cas;
	while(cas!=0){
		cin >> Ax>>Ay>>Bx>>By>>Cx>>Cy>>Dx>>Dy>>Rx>>Ry;
		if(Rx>=Ax && Rx>=Dx && Rx<=Bx && Rx<=Cx && Ry>=Ay && Ry >= By && Ry <=Dy && Ry <= Cy){
			cout<<"1"<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
		cas--;
	}
	return 0;
}