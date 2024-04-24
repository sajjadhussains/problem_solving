#include <bits/stdc++.h>
using namespace std;

void printReverseEven(int arr[], int n) {
    if (n < 0) {
        return;
    }
    if (n % 2 == 0) {
        cout << arr[n];
        if (n > 0) {
            cout << " ";
        }
    }
    printReverseEven(arr, n - 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    printReverseEven(arr, n - 1);
    return 0;
}
