#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>x>>n;
        int existing_cap=x*100;
        if(existing_cap<n){
            int rem_pass=n-existing_cap;
            int ans;
            if(rem_pass%100!=0){
                int ans=(rem_pass/100)+1;
                cout<<ans<<endl;
            }
            else{
                ans=rem_pass/100;
                cout<<ans<<endl;
            }
           
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}
