#include<stdio.h>
#include"inout.h"

int main(){
	inout();
	int uni,student,candidate;
	int perticipent=0;
	
	scanf("%d",&uni);
	while(uni>0){
		scanf("%d",&student);
		candidate = (student/3);
		candidate = candidate*3;

		perticipent+=candidate;
		candidate=0;
		uni--;
	}
	printf("%d\n",perticipent);
	return 0;
}