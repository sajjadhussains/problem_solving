#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int minimum=min({a,b,c});
        cout<<(a+b+c)-minimum<<endl;
    }
    
    return 0;
}
