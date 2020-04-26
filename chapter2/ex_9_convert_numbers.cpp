#include <iostream>
using namespace std;

int main() {
  string number;
  cout << "Enter a number as a word\n";
  cin >> number;
  if (number == "zero") {
    cout << "0\n";
  } else if (number == "one") {
    cout << "1\n";
  } else if (number == "two") {
    cout << "2\n";
  } else if (number == "three") {
    cout << "3\n";
  } else if (number == "four") {
    cout << "4\n";
  } else {
    cout << "I can't do that yet\n";
  }
}