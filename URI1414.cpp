#include <iostream>
#include <string>
#include "inout.h"
using namespace std;

int main() {
  io();
  int x, y;
  while (cin >> x >> y && x){
    int counter = 0;
    for (int i = 0; i < x; i++) {
      string sen;
      int temp1;
      cin >> sen >> temp1;
      counter += temp1;
    }
    cout << (y * 3) - counter << endl;
  }
  return 0;
}