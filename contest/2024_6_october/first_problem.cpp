#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n, std::greater<long long int>());

    while (n > 1) {
        long long int num1 = arr[n - 1];
        long long int num2 = arr[n - 2];

        long long int res = (num1 + num2) / 2;

        arr[n - 2] = res;
        n--;
    }
    cout << arr[0] << endl;
    }

    return 0;
}
