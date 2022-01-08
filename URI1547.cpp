#include<stdio.h>
#include<stdlib.h>
int main(){
	int c;
	int a,b,temp;
	int arr[100]={};
	int cp[100]={};

	scanf("%d",&c);
	while(c!=0){
		scanf("%d %d",&a,&b);

		for(int i=0;i< a; i++){
			scanf("%d",&temp);
			arr[i]=abs(temp-b);
		}

		int b = arr[0];
		for(int i=0;i< a; i++){
			if(arr[i]<b){
				b=arr[i];
			}
		}
		for(int j=0;j< a; j++){
			cp[j]=arr[j];
		}
		for(int i=0;i< a; i++){
			for(int k=i;k< a; k++){
				if(cp[i]>cp[k]){
					int temp = cp[i];
					cp[i]=cp[k];
					cp[k]=temp;
				}
			}
		}
		for(int j=0;j< a; j++){
			if(arr[j]==cp[0]){
				printf("%d\n",j+1);
				break;
			}
		}
		c--;
	}
	return 0;
}