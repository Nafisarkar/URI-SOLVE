#include<iostream>
#include "inout.h"
using namespace std;
int main(){
	io();
	int x;
	while(cin>>x && x!=0){
		int res =0;
		int y,z;
		cin>>y>>z;
		res= (double)(x*y)/-(x-z)*z;
		if(res!=1){
			printf("%d paginas\n",res);
		}
      	else{
      		printf("%d pagina\n",res);		
      	}
       
	}	
	return 0;

}