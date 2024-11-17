#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int arr[k];
        
        for (int i = 0; i < k; i++) {
            cin >> arr[i];
        }
        
        int freq[200005] = {0};
        for (int i = 0; i < k; i++) {
            freq[arr[i]]++;
        }

        k -= 2;

        bool found = false;
        for (int row = 1; row <= k; row++) {
            if (row * row == k && freq[row] >= 2) {
                cout << row << " " << row << endl;
                found = true;
                break;
            }
            if (k % row == 0) {
                int column = k / row;
                if (freq[row] > 0 && freq[column] > 0) {
                    cout << row << " " << column << endl;
                    found = true;
                    break;
                }
            }
        }

        if (!found) {
            cout << "No solution" << endl; 
        }
    }

    return 0;
}
