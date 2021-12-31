#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	float a,b;
	scanf("%f %f",&a,&b);
	if(a>b){
		a=(a-b);
	}
	else{
		a=(b-a);
	}
	b = (b/a);
	printf("%.0f\n",ceil(b));
	return 0;
}