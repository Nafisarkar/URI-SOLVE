#include<stdio.h>

int smfind(int x,int y){
	int s;
	if(x>y){
		s= y;
	}
	else{
		s=x;
	}
	return s;
}

int bgfind(int x1,int y1){
	int s1;
	if(x1>y1){
		s1= x1;
	}
	else{
		s1=y1;
	}
	return s1;
}

int main(){

	int ld,cd,lv,cv;
	scanf("%d %d %d %d",&ld,&cd,&lv,&cv);
	int sm1,sm2;
	
	sm1=smfind(ld,cd);
	sm2=smfind(lv,cv);

	int tsm;
	tsm = sm1+sm2;

	int big;

	big=(smfind(bgfind(ld,cd),bgfind(lv,cv)));

	big=smfind(tsm,big);

	printf("%d\n",big*big);
	
	return 0;	
}