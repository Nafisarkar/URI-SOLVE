#include <stdio.h>
#include "inout.h"


int fun(int a) {
	if(a<0){
		return -a;
	}else {
		return a;
	}
}

int main() {
  io();
  int x, y, l, m;

  while (scanf("%d %d %d %d ", &x, &y, &l, &m) && (x != 0) && (y != 0) &&
         (l != 0) && (m != 0)) {
    if(x==l && y==m) {
		printf("0\n");
	}else if(x ==l || y ==m) {
		printf("1\n");
	}else {
		int res1 = fun(x-l);
		int res2 = fun(y-m);
		if(res1 - res2==0){
			printf("1\n");
		}else{
			printf("2\n");
		}
	}
  }
  return 0;
}