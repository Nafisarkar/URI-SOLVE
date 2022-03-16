#include<iostream>
#include"inout.h"
using namespace std;

int main()
{
	inout();
	int temp;
	while(cin>>temp){
		int posix=1,posiy=temp;
		for(int j=1;j<=temp;j++){
			// printf("x %d y %d  ",posix,posiy);
			for(int i=1;i<=temp;i++){
			if(posix==posiy && (((temp-1)/2)+1)==i){
				printf("2");
			}else if(i==posix){
				printf("1");
			}else if(i==posiy){
				printf("2");
			}else{
				printf("3");
			}
		}
		posix++;
		posiy--;
		printf("\n");
		}
		
	}
	return 0;
}