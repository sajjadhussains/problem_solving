#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int s,x,y,z;
        cin>>s>>x>>y>>z;
        int rem=s-(x+y);
        if(rem>=z){
            cout<<0<<endl;
        }
        else{
            if(x+rem>=z || y+rem>=z){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
    }
    return 0;
}
