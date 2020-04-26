#include <iostream>
using namespace std;

int main() {
  char op;
  int num1, num2;
  cout << "Enter your calculation\n";
  cin >> op >> num1 >> num2;

  if (op == '+') {
    cout << num1 + num2 << "\n";
  } else if (op == '-') {
    cout << num1 - num2 << "\n";
  } else if (op == '*') {
    cout << num1 * num2 << "\n";
  } else if (op == '/') {
    cout << num1 / num2 << "\n";
  } else {
    cout << "I can't do that :(\n";
  }
}