#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm> // For min function
using namespace std;

// Function to calculate the minimum number of magic operations
int min_magic_operations(vector<vector<int>>& matrix, int n) {
    // Map to store the minimum value for each diagonal
    unordered_map<int, int> diagonal_min;

    // Loop through the matrix to find the minimum value for each diagonal
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int diagonal = i - j; // Identify the diagonal

            // If diagonal not in map, set its value to matrix[i][j]
            if (diagonal_min.find(diagonal) == diagonal_min.end()) {
                diagonal_min[diagonal] = matrix[i][j];
            } else {
                // Update the minimum value for the diagonal
                diagonal_min[diagonal] = min(diagonal_min[diagonal], matrix[i][j]);
            }
        }
    }

    // Calculate the total number of operations needed
    int operations = 0;
    for (const auto& entry : diagonal_min) {
        if (entry.second < 0) {
            // Add the absolute value of the most negative element on the diagonal
            operations += abs(entry.second);
        }
    }

    return operations;
}

int main() {
   
    int t;
    cin>>t;
    while(t--){
        int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

   
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

   
    int result = min_magic_operations(matrix, n);
   
    cout << result << endl;

    }
    return 0;
}
