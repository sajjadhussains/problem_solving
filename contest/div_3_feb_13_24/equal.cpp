#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int first = (n - 1) / 26;
        int remainder = (n - 1) % 26;
        
        string word = "";
        if (remainder >= 0 && remainder <= 2) {
            word += 'a' + remainder;
            if (first > 0) {
                word += 'a';
                if (first > 1) {
                    word += 'a';
                }
            }
        } else if (remainder >= 3 && remainder <= 25) {
            word += 'a';
            if (remainder > 3) {
                word += 'a' + remainder - 3;
            } else {
                word += 'b';
            }
            if (first > 0) {
                word += 'a';
                if (first > 1) {
                    word += 'a';
                }
            }
        }
        
        cout << word << endl;
    }
    
    return 0;
}
