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
  string i, j, k;
  string temp;
  cout << "Enter three names \n";
  cin >> i >> j >> k;
  if (i[0] > j[0]) {
    temp = i;
    i = j;
    j = temp;
  }
  if (j[0] > k[0]) {
    temp = j;
    j = k;
    k = temp;
  }
  if (i[0] > j[0]) {
    temp = i;
    i = j;
    j = temp;
  }
  cout << i << " " << j << " " << k << "\n";
}