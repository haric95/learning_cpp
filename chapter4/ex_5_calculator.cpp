#include <iostream>
using namespace std;

int main() {
  double arg1, arg2;
  char op;
  double out;
  bool valid;
  cout << "Enter two doubles followed by one of the following operators: "
       << "+ - * /" << endl;
  cin >> arg1 >> arg2 >> op;
  switch (op) {
    case '+':
      out = arg1 + arg2;
      valid = true;
      break;
    case '-':
      out = arg1 - arg2;
      valid = true;
      break;
    case '*':
      out = arg1 * arg2;
      valid = true;
      break;
    case '/':
      out = arg1 / arg2;
      valid = true;
      break;
    default:
      valid = false;
  }
  if (valid) {
    cout << "The result is: " << out << endl;
  } else {
    cout << "You need to enter one of the specified operators" << endl;
  }
}