#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int ans;
        if(x>=y){
           if(x%y==0){
               ans=x/y;
           }
           else{
               int ans1=x/y;
               ans=ans1+(x-(ans1*y));
           }
        }
        else{
            ans=x;
        }
        cout<<ans<<endl;
    }
    return 0;
}
