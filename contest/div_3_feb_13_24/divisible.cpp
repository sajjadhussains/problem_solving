#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n && arr[i] + arr[j] <= x; j++) {
                if ((arr[i] + arr[j]) % x == 0 && abs(arr[i] - arr[j]) % y == 0) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}
