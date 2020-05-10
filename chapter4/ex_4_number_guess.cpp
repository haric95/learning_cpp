#include <iostream>
#include <vector>
using namespace std;

int main() {
  int num;
  cout << "Enter an integer between 1 and 100 (inclusive)\n";
  cin >> num;
  int upper = 100;
  int lower = 0;
  int guess = (upper - lower) / 2;
  int guesses = 0;
  while (guess != num && guesses <= 7) {
    bool numIsLarger;
    cout << "Is your number larger than " << guess
         << " (1 for true 0 for false)?"
         << "\n";
    cin >> numIsLarger;
    if (numIsLarger) {
      lower = guess;
    } else {
      upper = guess;
    }
    if (upper - lower == 1) {
      guess = upper;
    } else {
      guess = (upper - lower) / 2 + lower;
    }
    ++guesses;
  }
  cout << "Your number is " << num << endl;
}