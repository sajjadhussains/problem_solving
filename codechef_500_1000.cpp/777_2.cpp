#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int diff=abs(x-y);
        if(diff%z==0){
            cout<<diff/z<<endl;
        }
        else{
            cout<<diff/z+1<<endl;
        }
    }
    
    return 0;
}
