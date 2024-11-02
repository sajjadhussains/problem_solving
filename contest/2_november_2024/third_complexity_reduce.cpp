#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        int q;
        cin >> q;
        
        set<int> beautiIndices;
        int sz = str.length();
        
        for (int i = 0; i <= sz - 4; i++) {
            if (str.substr(i, 4) == "1100") {
                beautiIndices.insert(i);
            }
        }

        
        for (int i = 0; i < q; i++) {
            int idx;
            char ch;
            cin >> idx >> ch;
            idx--;  

            
            if (str[idx] != ch) {
                
                for (int j = max(0, idx - 3); j <= min(sz - 4, idx); j++) {
                    if (str.substr(j, 4) == "1100") {
                        beautiIndices.erase(j);
                    }
                }

                
                str[idx] = ch;

                
                for (int j = max(0, idx - 3); j <= min(sz - 4, idx); j++) {
                    if (str.substr(j, 4) == "1100") {
                        beautiIndices.insert(j);
                    }
                }
            }

            
            if (!beautiIndices.empty()) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
