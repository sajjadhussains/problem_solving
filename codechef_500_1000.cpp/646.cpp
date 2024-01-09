#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x<y){
            cout<<x<<endl;
        }
        else if(x>y){
            cout<<2*x-y<<endl;
        }
        else if(y==0){
            cout<<2*x<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
    return 0;
}
