#include<stdio.h>
#include "inout.h"

int main()
{
	io();
	int run;
	scanf("%d",&run);
	int p1,p2,p3,p4,p5,p6;
	int counter=0;
	for(int i=0;i<run;i++){
		scanf("%d",&p1);
		scanf("%d %d %d %d",&p2,&p3,&p4,&p5);
		scanf("%d",&p6);

		// printf("[%d]\n",p1);
		// printf("[%d] [%d] [%d] [%d]\n",p2,p3,p4,p5);
		// printf("[%d]\n",p6);
		
		//array creating and sotring
		int arr[6]={p1,p2,p3,p4,p5,p6};
		for(int i=0;i<6;i++){
			for(int j=0;j<6;j++){
				if(arr[i]<arr[j]){
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		
		//printing the array
		// for(int i=0;i<6;i++){
		// 	printf("[%d] ",arr[i]);
		// }printf("\n");

		int solid_array[6] ={1,2,3,4,5,6};
		int bk=0;
		for(int i=0;i<6;i++){
			if(arr[i]!=solid_array[i]){
				bk=1;
				break;
			}
		}

		//condititons 
		if(bk!=1){
			counter++;
		}
		if((p1+p6)==7){
			counter++;
		}
		if((p2+p4)==7){
			counter++;
		}
		if((p3+p5)==7){
			counter++;
		}

		//printf("[counter %d]",counter);
		if(counter==4){
			printf("SIM\n");
		}else{
			printf("NAO\n");
		}
		counter=0;
	}

	
	//printf("[run %d]",run);
	return 0;
}