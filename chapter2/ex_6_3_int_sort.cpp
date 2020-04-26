// #include <algorithm>
// #include <cmath>
#include <iostream>
// #include <string>
// #include <vector>
using namespace std;

inline void keep_window_open() {
  char ch;
  std::cin >> ch;
}

int main() {
  int i, j, k;
  int temp;
  cout << "Enter three ints \n";
  cin >> i >> j >> k;
  if (i < j) {
    temp = i;
    i = j;
    j = temp;
  }
  if (j < k) {
    temp = j;
    j = k;
    k = temp;
  }
  if (i < j) {
    temp = i;
    i = j;
    j = temp;
  }
  cout << i << " " << j << " " << k << "\n";
}