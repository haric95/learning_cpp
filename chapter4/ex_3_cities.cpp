#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<double> distances;
  cout << "Enter a list of distances bewteen your two cities"
       << "\n";
  for (double distance; cin >> distance;) {
    distances.push_back(distance);
  }
  double max = distances[0];
  double min = distances[0];
  double total = distances[0];
  double mean;
  for (int i = 1; i < distances.size(); i++) {
    if (distances[i] > max) {
      max = distances[i];
    } else if (distances[i] < min) {
      min = distances[i];
    }
    total += distances[i];
  }
  mean = total / distances.size();
  cout << "The route with the shortest length is " << min << "km.\n";
  cout << "The route with the longest length is " << max << "km.\n";
  cout << "The total distance of all the routes is " << total << "km.\n";
  cout << "The mean route length is " << mean << "km.\n";
}