#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if((x==0 && y==0) || (x==0 && z==0) || (y==0 && z==0)){
            cout<<"Water filling time"<<endl;
        }
        else{
            cout<<"Not now"<<endl;
        }
    }
    return 0;
}
