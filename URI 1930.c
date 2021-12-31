#include<stdio.h>

int reduce(int x){
	x=x-1;
	return x;
}

int main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);

	a=reduce(a);
	b=reduce(b);
	c=reduce(c);
	d+=a+b+c;

	printf("%d\n",d);
	return 0;
}