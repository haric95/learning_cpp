#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter an integer"
       << "\n";
  cin >> num;
  if (num % 2 == 0) {
    cout << "The number is even\n";
  } else if (num % 2 == 1) {
    cout << "The number is odd\n";
  } else {
    cout << "I can't do that yet :(\n";
  }
}