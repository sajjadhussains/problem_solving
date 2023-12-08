#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> numbers(n);

    // Input the numbers
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // Initialize variables for the sum and carry
    string sum = "0";
    int carry = 0;

    // Loop through each digit position from right to left
    for (int i = 49; i >= 0; --i) {
        int digitSum = carry;

        // Add the digits at the current position for all numbers
        for (int j = 0; j < n; ++j) {
            digitSum += (numbers[j][i] - '0');
        }

        // Update sum and carry
        sum.push_back((digitSum % 10) + '0');
        carry = digitSum / 10;
    }

    // Add the remaining carry
    while (carry > 0) {
        sum.push_back((carry % 10) + '0');
        carry /= 10;
    }

    // Reverse the sum string
    reverse(sum.begin(), sum.end());

    // Output the first ten digits of the sum
    cout << sum.substr(0, 10) << endl;

    return 0;
}
