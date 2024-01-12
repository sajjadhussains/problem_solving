#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        float a, x, b, y;  // or use double instead of float
        cin >> a >> x >> b >> y;
        float alice = a / x;
        float bob = b / y;
        if (alice > bob) {
            cout << "Alice" << endl;
        } else if (alice < bob) {
            cout << "Bob" << endl;
        } else {
            cout << "Equal" << endl;
        }
    }
    return 0;
}
