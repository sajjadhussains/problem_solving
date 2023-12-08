#include <iostream>
#include <vector>

using namespace std;

int findMaxPathSum(vector<vector<int>>& triangle) {
    int rows = triangle.size();
    cout<<rows<<endl;

    // Start from the second-to-last row and move upwards
    for (int i = rows - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            // Update each element with the sum of the current value and the maximum of the two adjacent values below it
            triangle[i][j] += max(triangle[i + 1][j], triangle[i + 1][j + 1]);
        }
    }

    // The updated value at the top of the triangle is the maximum path sum
    return triangle[0][0];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Read the triangle
        vector<vector<int>> triangle(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                cin >> triangle[i][j];
            }
        }

        // Find and print the maximum path sum
        cout << findMaxPathSum(triangle) << endl;
    }

    return 0;
}
