#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> skill(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> skill[i];
    }

    vector<int> indices[4];

    for (int i = 1; i <= n; i++) {
        indices[skill[i]].push_back(i);
    }

    int min_teams = min({indices[1].size(), indices[2].size(), indices[3].size()});

    for (int i = 0; i < min_teams; i++) {
        cout << indices[1][i] << " " << indices[2][i] << " " << indices[3][i] << endl;
    }

    return 0;
}
//unsolved