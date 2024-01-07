#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i; // Store the original index along with the value
    }

    sort(arr.begin(), arr.end(), greater<pair<int, int>>()); // Sort in descending order

    int s = 0, d = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            s += arr[i].first;
        } else {
            d += arr[i].first;
        }
    }

    cout << s << " " << d << endl;
    return 0;
}
