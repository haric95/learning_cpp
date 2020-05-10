#include <cmath>
#include <iostream>
using namespace std;

// When double values reaches it's limit, you start to lose precision.
int main() {
  double grains;
  int squares = 64;
  for (int i = 0; i < squares; i++) {
    grains += pow(2, squares);
  }
  cout << grains << endl;
}