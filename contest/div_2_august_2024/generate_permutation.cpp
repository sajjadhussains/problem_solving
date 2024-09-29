#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        if(n % 2 == 0) {
            cout << -1 << endl;
        } else {
            vector<int> permutation(n);
            int left = 0, right = n - 1;

            for(int num = 1; num <= n; num++) {
                if(num % 2 == 1) {
                    permutation[left++] = num;
                } else {
                    permutation[right--] = num;
                }
            }

            for(int i = 0; i < n; i++) {
                cout << permutation[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
