#include<iostream>
#include<iomanip> 
#include<cmath>
using namespace std;

#define pi 3.14


int main(){
    double redious,cas,area,hight;
	while(cin >> cas >> area){
		redious = area / 2;
		area = pi*pow(redious,2);
		hight = cas / area;

		cout << fixed<<setprecision(2)<<"ALTURA = "<<hight<<endl;
		cout << fixed<<setprecision(2)<<"AREA = "<<area<<endl;
	}
	return 0;
}