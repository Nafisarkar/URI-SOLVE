#include <iostream>
#include <string>
#include "inout.h"

using namespace std;

int main(){
	io();
	int x;
	cin>>x;
	string name;
	double s=0,b=0,a=0;
	double ss=0,sb=0,sa=0;
	double temps=0,tempb=0,tempa=0;
	double tempss=0,tempsb=0,tempsa=0;
	while(x--){
		cin>>name;
		
		cin>>temps>>tempb>>tempa;
		cin>>tempss>>tempsb>>tempsa;
		
		s+=temps;b+=tempb;a+=tempa;
		ss+=tempss;sb+=tempsb;sa+=tempsa;
	}

	float p,q,r;
    p=(ss*100.00)/s;
    q=(sb*100.00)/b;
    r=(sa*100.00)/a;
    printf("Pontos de Saque: %.2f",p);
    cout<<" %.\n";
    printf("Pontos de Bloqueio: %.2f",q);
    cout<<" %.\n";
    printf("Pontos de Ataque: %.2f",r);
    cout<<" %.\n";



	return 0;
}