#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int second_left=n-1;
        int ans;
        if(second_left%7>=1){
            ans=(second_left/7)+1;
        }
        else{
            ans=second_left/7;
        }
        cout<<ans<<endl;
    }
    return 0;
}
