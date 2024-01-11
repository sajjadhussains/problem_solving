#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k,m,ans;
        cin>>n>>k>>m;
        int bag_c=k*m;
        if(n<=bag_c){
            ans=1;
        }
        else{
           if(n%bag_c==0){
               ans=n/bag_c;
           }
           else{
               ans=(n/bag_c)+1;
           }
        }
        cout<<ans<<endl;
    }
    return 0;
}
