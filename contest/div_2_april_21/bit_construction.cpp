#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findMaxOneSequenceGreedy(int k, int n) {
  vector<int> sequence, sortedNumbers(n);

  // Get user input for numbers
  cout << "Enter " << n << " non-negative integers:" << endl;
  for (int i = 0; i < n; i++) {
    cin >> sortedNumbers[i];
  }

  // Sort numbers in descending order
  sort(sortedNumbers.rbegin(), sortedNumbers.rend());

  // Greedy approach to build sequence
  int currentSum = 0;
  for (int num : sortedNumbers) {
    if (currentSum + num <= k) {
      sequence.push_back(num);
      currentSum += num;
    } else {
      break;
    }
  }

  // Check if all n elements were found
  if (sequence.size() != n) {
    sequence.clear(); // No solution found, clear the vector
  }

  return sequence;
}

int main() {
  int k, n;
  cout << "Enter the target sum (k): ";
  cin >> k;
  cout << "Enter the number of elements (n): ";
  cin >> n;

  vector<int> sequence = findMaxOneSequenceGreedy(k, n);

  if (sequence.empty()) {
    cout << "No solution found with the given constraints." << endl;
  } else {
    cout << "Sequence with potentially maximized 1s and sum " << k << ":" << endl;
    for (int num : sequence) {
      cout << num << " ";
    }
    cout << endl;
  }

  return 0;
}
