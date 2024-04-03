#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long max_sum = 0;
    for (int i = n - 1; i >= max(0, n - k); --i) {
        if(a[i]<0){
            break;
        }
        max_sum += a[i];
    }
    cout << max_sum << endl;

    return 0;
}
