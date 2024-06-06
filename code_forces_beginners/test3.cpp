#include<bits/stdc++.h>

using namespace std;

void print_even_indices_reverse(int* arr, int index) {
    if (index < 0) {
        return;
    }
    if (index % 2 == 0) {
        cout << arr[index] << " ";
    }
    print_even_indices_reverse(arr, index - 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the recursive function starting from the last index
    print_even_indices_reverse(arr, n - 1);

    return 0;
}
