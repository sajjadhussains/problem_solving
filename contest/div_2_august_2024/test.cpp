#include<bits/stdc++.h>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    while(test_cases--) {
        int size;
        cin >> size;

        if(size % 2 == 0) {
            cout << -1 << endl;
        } else {
            vector<int> permutation(size);
            int left = 0, right = size - 1;

            for(int num = 1; num <= size; num++) {
                if(num % 2 == 1) {
                    permutation[left++] = num;
                } else {
                    permutation[right--] = num;
                }
            }

            for(int i = 0; i < size; i++) {
                cout << permutation[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
