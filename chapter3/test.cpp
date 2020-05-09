#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<double> temps;
  for (double temp; cin >> temp;) {
    temps.push_back(temp);
    cout << "here: " << temp << "\n";
  }
}