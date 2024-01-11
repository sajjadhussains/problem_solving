#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans;
        if(a+b<=10){
            ans=-1;
        }
        else{
            ans=21-(a+b);
        }
        cout<<ans<<endl;
    }
    return 0;
}
