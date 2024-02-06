#include <iostream>
#include <cmath>
using namespace std;

int max_stability(int n, int m) {
    int total_cells = n * m;
    int max_bricks = total_cells / 2; // Maximum number of bricks to cover half the cells
    int horizontal_bricks = ceil((double)total_cells / 2.0); // Number of horizontal bricks
    int vertical_bricks = total_cells / 2; // Number of vertical bricks
    return abs(horizontal_bricks - vertical_bricks);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << max_stability(n, m) << endl;
    }

    return 0;
}
