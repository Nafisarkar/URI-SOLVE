#include<iostream>
#include<math.h>
#include"inout.h"
using namespace std;

void sort(int arrx[]){
    for(int i=0; i<4;i++){
        for(int j=i; j<4;j++){
            if(arrx[i]<arrx[j]){
                int temp = arrx[i];
                arrx[i] = arrx[j];
                arrx[j] = temp;
            }
        }
    }
}


int main(){
    inout();
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] ;

    sort(arr);
    int team1 = arr[0]+arr[3];
    int team2 = arr[1]+arr[2];

    int difference = team1 - team2;
    cout<< abs(difference) << endl;
    return 0;
}