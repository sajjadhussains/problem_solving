#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int ans;
        if(x%4==0){
            ans=x/4;
        }
        else{
            ans=(x/4)+1;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
