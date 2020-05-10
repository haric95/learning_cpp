#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int numGrainsNeeded;
  int squares = 0;
  int grains = 0;
  cout << "Enter how many grains of rice you want" << endl;
  cin >> numGrainsNeeded;
  if (cin.fail()) {
    cout << "You need to enter a valid number" << endl;
    return 0;
  }
  while (grains < numGrainsNeeded) {
    ++squares;
    grains += pow(2, squares - 1);
    cout << "Num grains: " << grains << endl;
  }
  cout << "You'd need a chess board with " << squares << " squares." << endl;
}