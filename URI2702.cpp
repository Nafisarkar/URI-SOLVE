#include <stdio.h>
#include <stdlib.h>
//#include"Inout.h"
int main(){
	//inout();
	int chicken ,beef ,pasta;
	int avlchi ,avlbeef ,avlpasta;
	scanf("%d %d %d" ,&chicken ,&beef ,&pasta);
	scanf("%d %d %d" ,&avlchi ,&avlbeef ,&avlpasta);

	int unsetisfy=0;

	if(avlchi>=chicken){
		unsetisfy+=avlchi-chicken;
	}
	if(avlbeef>=beef){
		unsetisfy+=avlbeef-beef;
	}
	if(avlpasta>=pasta){
		unsetisfy+=avlpasta-pasta;
	}

	printf("%d\n",unsetisfy);
	return 0;
}