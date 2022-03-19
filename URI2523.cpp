// #include "inout.h"
#include <iostream>
using namespace std;
int main() {
//   inout();
  string letter;
  while (cin >> letter) {
    int t;
    cin >> t;
    while (t--) {
      int temp;
      cin >> temp;
      cout << letter[temp - 1];
    }
    cout << "\n";
  }
  return 0;
}