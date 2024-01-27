#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int coins;
        if(n%5==0){
            coins=(n/5)*4;
        }
        else{
            coins=(n/5)*4+(n%5);
        }
        cout<<coins<<endl;
    }
    return 0;
}
