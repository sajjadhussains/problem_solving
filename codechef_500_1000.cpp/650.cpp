#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(z-(y/x)<0){
            cout<<0<<endl;
        }
        else{
            cout<<z-(y/x)<<endl;
        }
    }
    return 0;
}
