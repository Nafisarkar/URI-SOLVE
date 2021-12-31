#include<bits/stdc++.h>
using namespace std;
#define pi 3.1416

int main(){
	int R,W,L,Table_area,Pizza_area;
	while(cin>>R>>W>>L){
		Table_area = pi*R*R;
		Pizza_area = W*L;

		cout<<"table:"<<Table_area<<"\n"<<"pizza:"<<Pizza_area<<endl;
		if(Table_area<Pizza_area){
			cout<<"it doesn't fit"<<endl;
		}
		else{
			cout<<"it fits"<<endl;
		}
		Pizza_area =0;
		Table_area=0;
		
	}
	return 0;
}