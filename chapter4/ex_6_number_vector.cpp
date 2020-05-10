#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<string> nums = {"zero", "one", "two",   "three", "four",
                         "five", "six", "seven", "eight", "nine"};
  // string numLetters;
  // int num = 0;
  // bool valid = true;
  // cout << "Enter a number from 0-9 in letters (no caps)" << endl;
  // cin >> numLetters;
  // while (nums[num] != numLetters && valid) {
  //   ++num;
  //   if (num >= 10) {
  //     valid = false;
  //   }
  // }
  // if (valid) {
  //   cout << "This number is " << num << endl;
  // } else {
  //   cout << "You didn't enter a valid number" << endl;
  // }
  int num;
  cout << "Enter a number from 0-9" << endl;
  cin >> num;
  if (num >= 0 && num <= 9 && !cin.fail()) {
    cout << "You entered: " << nums[num] << endl;
  } else {
    cout << "That wasn't in the range :(" << endl;
  }
}