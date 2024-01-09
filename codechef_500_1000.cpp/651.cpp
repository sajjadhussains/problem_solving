#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int needs_t=y-x;
        int ans;
        if(needs_t>0){
            if(needs_t/8==0){
                ans=needs_t/8;
            }
            else{
                ans=needs_t/8+1;
            }
        }
        else{
            ans=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}
