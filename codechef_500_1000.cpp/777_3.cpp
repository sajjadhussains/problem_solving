#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int h,x,y;
        cin>>h>>x>>y;
        int ans=1;
        int rem=h-y;
        if(rem%x==0){
            ans+=rem/x;
        }
        else{
            ans+=rem/x+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
