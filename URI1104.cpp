#include <iostream>
#include "inout.h"
using namespace std;

int remove_duplicate_elements(int arr[], int n) {

  if (n == 0 || n == 1)
    return n;

  int temp[n];

  int j = 0;
  int i;
  for (i = 0; i < n - 1; i++)
    if (arr[i] != arr[i + 1])
      temp[j++] = arr[i];
  temp[j++] = arr[n - 1];

  for (i = 0; i < j; i++)
    arr[i] = temp[i];

  return j;
}

int main() {
  io();
  int temp1, temp2;
  while (cin >> temp1 >> temp2 && temp1 != 0 && temp2 != 0) {
    int ArrayUp[temp1];
    int ArrayDown[temp2];
    for (int i = 0; i < temp1; i++) {
      cin >> ArrayUp[i];
    }
    for (int i = 0; i < temp2; i++) {
      cin >> ArrayDown[i];
    }
    cout << "All" << endl;
    // used for printing purpose
    for (int i = 0; i < temp1; i++) {
      cout << ArrayUp[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < temp2; i++) {
      cout << ArrayDown[i] << " ";
    }
    cout << endl;
    int l1 = remove_duplicate_elements(ArrayUp, temp1);
    int l2 = remove_duplicate_elements(ArrayDown, temp2);
    cout << " " << l1 << " " << l2 << endl;

    // bubble sort
    for (int i = 0; i < l1; i++) {
      for (int j = 0; j < l1 - i - 1; j++) {
        if (ArrayUp[j] > ArrayUp[j + 1]) {
          int tempx = ArrayUp[j];
          ArrayUp[j] = ArrayUp[j + 1];
          ArrayUp[j + 1] = tempx;
        }
      }
    }
    for (int i = 0; i < l2; i++) {
      for (int j = 0; j < l2 - i - 1; j++) {
        if (ArrayDown[j] > ArrayDown[j + 1]) {
          int tempx = ArrayDown[j];
          ArrayDown[j] = ArrayDown[j + 1];
          ArrayDown[j + 1] = tempx;
        }
      }
    }

    for (size_t i = 0; i < l1; i++) {
      int src = ArrayUp[i];
      for (size_t j = 0; j < l2; j++) {
        int dest = ArrayDown[j];
        if (src == dest) {
          for (int f = i; f < l1; f++) {
            ArrayUp[f] = ArrayUp[f + 1];
          }
          for (int f = j; f < l2; f++) {
            ArrayDown[f] = ArrayDown[f + 1];
          }
          l1--;
          l2--;
        }
      }
    }

    cout << "duplicate elements" << endl;
    for (int i = 0; i < l1; i++) {
      cout << ArrayUp[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < l2; i++) {
      cout << ArrayDown[i] << " ";
    }

    if (l1 > l2) {
      cout << l2 << endl;
    } else if (l1 < l2) {
      cout << l1 << endl;
    } else {
      cout << "0" << endl;
    }

    cout << endl;
  }

  return 0;
}