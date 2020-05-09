#include <iostream>
#include <string>
#include <vector>
using namespace std;

string cm = "cm";
string inch = "in";
string meter = "m";
string foot = "ft";
constexpr double mToCm = 100.0;
constexpr double inchToCm = 2.54;
constexpr double feetToCm = inchToCm * 12.0;

double convertToCm(string unit, double num) {
  double numInCm;
  if (unit == cm) {
    numInCm = num;
  } else if (unit == inch) {
    numInCm = num * inchToCm;
  } else if (unit == meter) {
    numInCm = num * mToCm;
  } else if (unit == foot) {
    numInCm = num * feetToCm;
  } else {
    cout << "Please enter a valid unit\n";
  }
  cout << "returning:" << numInCm << "\n";
  return numInCm;
}

int main() {
  double largest, smallest;
  int start;
  string unit;
  cin >> start >> unit;
  double num = convertToCm(unit, start);
  largest = start;
  smallest = start;
  cout << "Largest: " << largest << "cm "
       << " Smallest: " << smallest << "cm"
       << "\n";
  while (true) {
    double num;
    cin >> num >> unit;
    if (cin.fail()) {
      cout << "terminating\n";
      return 0;
    }
    double numInCm = convertToCm(unit, num);
    if (numInCm > largest) {
      largest = numInCm;
    } else if (numInCm < smallest) {
      smallest = numInCm;
    }
    cout << "Largest: " << largest << "cm "
         << " Smallest: " << smallest << "cm"
         << "\n";
  }
}