#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int rounds=0;
        while(a/2!=0){
            rounds++;
            a=a/2;
        }
        cout<<rounds*b+c*(rounds-1)<<endl;
    }
    return 0;
}
