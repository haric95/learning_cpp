#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<double> temps;
  cout << "Enter a list of doubles"
       << "\n";
  for (double temp; cin >> temp;) {
    temps.push_back(temp);
  }

  sort(temps.begin(), temps.end());

  bool isSizeOdd = temps.size() % 2 == 1;
  int midIndex = temps.size() / 2;
  double median;

  if (isSizeOdd) {
    median = temps[midIndex];
  } else {
    median = (temps[midIndex - 1] + temps[midIndex]) / 2;
  }

  cout << "The median is: " << median << "\n";
}