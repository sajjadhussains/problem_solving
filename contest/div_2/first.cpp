#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int min_limit = INT_MAX, max_limit = INT_MIN;
        vector<int>not_equal;
        for (int i = 0; i < n; i++) {
            int a, x;
            cin >> a >> x;

            if (a == 1) {
                min_limit = min(min_limit, x);
            } else if (a == 2) {
                max_limit = max(max_limit, x);
            }
            else{
                not_equal.push_back(x);
            }

        }
        int diff=0;
        for(int i=0;i<not_equal.size();i++){
            if(not_equal[i]>max_limit || not_equal[i]<min_limit){
                continue;
            }
            else{
                diff++;
            }
        }
        
        int ans=0;
        for(int i=min_limit;i<=max_limit;i++){
            ans++;
        }
        cout<<ans-diff<<endl;
    }

    return 0;
}
