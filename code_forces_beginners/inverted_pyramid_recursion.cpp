#include <iostream>
using namespace std;

void inverted_pyramid(int n, int space, int star) {
    if (n == 0) {
        return;
    }
    for (int i = 0; i < space; i++) {
        cout << " ";
    }
    for (int i = 0; i < star; i++) {
        cout << "*";
    }
    cout << endl;
    inverted_pyramid(n - 1, space + 1, star - 2);
}

int main() {
    int n;
    cin >> n;
    int space = 0;
    int star = 2 * n - 1;

    inverted_pyramid(n, space, star);

    return 0;
}
