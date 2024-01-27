#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int result=1;
        for(int i=n;i>=1;i--){
            result*=i;
        }
        cout<<result<<endl;
    }
    return 0;
}
