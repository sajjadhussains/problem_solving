#include<bits/stdc++.h>

using namespace std;
#define int long long

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n),x(n);
    for(auto &i:v){
        cin>>i;
    }
    vector<int>on_right(n+1,0);
    for(int i=0;i<n;i++){
        cin>>x[i];
        on_right[abs(x[i])]+=v[i];
    }
    int my_power=k;
    for(int i=1;i<=n;i++){
        if(my_power<on_right[i]){
            cout<<"NO"<<endl;
            return;
        }
        my_power-=on_right[i];
        my_power+=k;
    }
    cout<<"YES"<<endl;
}
signed main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}