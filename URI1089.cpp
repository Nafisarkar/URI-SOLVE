#include <iostream>
#include "inout.h"
using namespace std;

int main() {
  io();
  int x;
  while (cin >> x && x != 0) {
    int array[x];
    int peak = 0;
    for (size_t i = 0; i < x; i++) {
      cin >> array[i];
    }

    for (size_t i = 1; i < x - 1; i++) {
      if (array[i] > array[i + 1] && array[i] > array[i - 1] || array[i] < array[i + 1] && array[i] < array[i - 1]) {
        peak++;
      }
    }
    if(array[0]>array[x-1]&&array[0]>array[1] || array[0]<array[x-1]&&array[0]<array[1]){
        peak++;
    }if(array[x-1]>array[x-2]&&array[x-1]>array[0] || array[x-1]<array[x-2]&&array[x-1]<array[0]){
        peak++;
    }
    cout << peak << endl;
  }

  return 0;
}