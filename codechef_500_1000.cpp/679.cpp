#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x<=3){
            cout<<x*y<<endl;
        }
        else{
           int ans;
           int break_time;
           if(x%3==0){
               break_time=x/3-1;
           }
           else{
               break_time=x/3;
           }
           ans=break_time*z+x*y;
           cout<<ans<<endl;
        }
    }
    return 0;
}
