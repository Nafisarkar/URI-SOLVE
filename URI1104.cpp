#include <iostream>
#include <set>
#include "inout.h"
using namespace std;

int main() {
  io();
  set<int> set1;
  set<int> set2;
  int x, y;

  while (cin >> x >> y && x != 0 && y != 0) {
    set1.clear();
    set2.clear();
    for (int i = 0; i < x; ++i) {
      int temp1;
      cin >> temp1;
      set1.insert(temp1);
    }
    for (int i = 0; i < y; ++i) {
      int temp2;
      cin >> temp2;
      set2.insert(temp2);
    }

    // for (int i : set1) {
    //   cout << i << " ";
    // }
    // cout << endl;
    // for (int j : set2) {
    //   cout << j << " ";
    // }
    // cout << endl;

    int res_counte = 0;
    if (set1.size() < set2.size()) {
      for (int i : set1) {
        auto it = set2.find(i);
        if (it == set2.end()) {
          res_counte++;
        }
      }
    } else{
      for (int j : set2) {
        auto ij = set1.find(j);
        if (ij == set1.end()) {
          res_counte++;
        }
      }
    }
    cout << "" << res_counte<<endl;
  }

  return 0;
}