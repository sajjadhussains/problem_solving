#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int programming = 0, maths = 0, pe = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            programming++;
        }
        else if(arr[i] == 2) {
            maths++;
        }
        else {
            pe++;
        }
    }

    bool arr1[n];
    for(int i = 0; i < n; i++) {
        arr1[i] = false;
    }

    int minimum = min({programming, maths, pe});
    cout<<minimum<<endl;
    for(int i = 0; i < minimum; i++) {
        bool a = false, b = false, c = false;
        for(int j = 0; j < n; j++) {
            if(arr[j] == 1 && !arr1[j] && !a) {
                cout << j+1 << " ";
                arr1[j] = true;
                a = true;
            }
            else if(arr[j] == 2 && !arr1[j] && !b) {
                cout << j+1 << " ";
                arr1[j] = true;
                b = true;
            }
            else if(arr[j] == 3 && !arr1[j] && !c) {
                cout << j+1 << " ";
                arr1[j] = true;
                c = true;
            }
        }
        cout << endl;
    }

    return 0;
}
