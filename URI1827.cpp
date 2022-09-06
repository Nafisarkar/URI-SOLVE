
#include "inout.h"
#include <iostream>
using namespace std;

int main() {
  io();
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b) {
    if (b > c) {
      if ((b - c) < (a - b))
        cout << ":)" << endl;
      else
        cout << ":(" << endl;
    } else
      cout << ":)" << endl;
  } else if (b > a) {
    if (c > b) {
      if ((c - b) < (b - a))
        cout << ":(" << endl;
      else
        cout << ":)" << endl;
    } else
      cout << ":(" << endl;
  } else if (c > b)
    cout << ":)" << endl;
  else
    cout << ":(" << endl;
  return 0;

  return 0;
}